/*
** config_loader.c for  in /home/chopar_a/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 27 13:35:18 2015 adrien chopard
** Last update Wed Apr 29 14:30:42 2015 adrien chopard
*/

#include "lem_in.h"

int	get_nb_max_ant(char *str)
{
  return (atoi(str));
}

int	is_line_discribing_a_room(char *str)
{
  int	result;
  int	i;
  
  result = FALSE;
  i = 0;
  while(str[i] != '\0')
    {
      if (str[i] == DATA_ROOM_SEPARATOR_CHAR)
        {
	  result = TRUE;
        }
      i++;
    }
  return (result);
}

t_room		*research_room(int nb_all_rooms, t_room **all_rooms, char *room_name)
{
  t_room	*result;
  int		i;
  
  i = 0;
  while (i < nb_all_rooms)
    {
      if (strcmp(all_rooms[i]->name, room_name) == 0)
        {
	  result = all_rooms[i];
        }
      i++;
    }
  return (result);
}

int		link_room_together(int nb_all_rooms, t_room **all_rooms, char *str)
{
  t_room_link	*current_link;
  t_room	*room_one;
  t_room	*room_two;

  current_link = analyse_line_conf_link(str);
  room_one = research_room(nb_all_rooms, all_rooms, current_link->name_room_one);
  room_two = research_room(nb_all_rooms, all_rooms, current_link->name_room_two);  
  room_one->links[room_one->nb_liens] = room_two;
  room_two->links[room_two->nb_liens] = room_one;
  room_one->nb_liens++;
  room_two->nb_liens++;
}

int		readFile()
{
  int		fd;
  char		*s;
  int		nb_max_ant;
  int		i;
  int		next_line_type;
  int		nb_all_rooms;
  t_room	*all_rooms[256];
  
  fd = open_file();
  i = 0;
  nb_all_rooms = 0;
  next_line_type = LINE_DATA;
  while ((s = get_next_line(fd)))
    {
      if (s[0] != '\0')
	{
	  printf("%s\n", s);
	  if (i == 0)
	    {
	      nb_max_ant = get_nb_max_ant(s);
	    }
	  else
            {
	      if (s[0] == COMMENT_CHAR)
                {
		  if (strcmp(s, COMMENT_START) == 0)
                    {
		      next_line_type = LINE_START;
		      my_putstr(" --> ligne salle ##start\n");
		    }
		  else if (strcmp(s, COMMENT_END) == 0)
                    {
		      next_line_type = LINE_END;
		      my_putstr(" --> ligne salle ##end\n");
		    }
                }
	      else if (next_line_type == LINE_START)
                {
		  all_rooms[nb_all_rooms++] = create_room_start(s, nb_max_ant);
		  next_line_type = LINE_DATA;
		  my_putstr(" --> Donnée de la salle start\n");
                }
	      else if (next_line_type == LINE_END)
                {
		  all_rooms[nb_all_rooms++] = create_room_end(s, nb_max_ant);
		  next_line_type = LINE_DATA;
		  my_putstr(" --> Donnée de la salle end\n");
                }
	      else
                {
		  if (is_line_discribing_a_room(s) == TRUE) 
		    {
		      all_rooms[nb_all_rooms++] = create_room_inter(s);
		      my_putstr(" --> Donnée de la salle intermédiaire\n");
		    }
		  else
		    {
		      link_room_together(nb_all_rooms, all_rooms, s);
		      my_putstr(" --> Les liaisons\n");
                    }
                }
            }
	  i++;
	}
    }
  
  printf("\n--------------------------------------------------\n\n");
  printf("NB ANT = %i\n", nb_max_ant);
  printf("\n");
  close_file(fd);
}

int	 load_configuration()
{
  printf("loading config\n\n");  
  readFile();
}
