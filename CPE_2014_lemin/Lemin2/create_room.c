/*
** create_room.c for  in /home/chopar_a/rendu/CPE_2014_lemin/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 27 18:36:34 2015 adrien chopard
** Last update Wed Apr 29 12:23:32 2015 adrien chopard
*/

#include "lem_in.h"

t_room	*create_room(t_room_param *current_param, int nb_ant, int nb_max_ant)
{
  t_room *current_room = xmalloc(sizeof(t_room));

  current_room->name = current_param->name;
  current_room->x = current_param->x;
  current_room->y = current_param->y;
  current_room->nb_ant = nb_ant;
  current_room->nb_ant_max = nb_max_ant;
  current_room->nb_liens = 0;
  free(current_param);
  return (current_room);
}

t_room	*create_room_start(char *str, int nb_max_ant)
{
  return (create_room(analyse_line_conf_room(str), nb_max_ant, nb_max_ant));
}

t_room	*create_room_end(char *str, int nb_max_ant)
{
  return (create_room(analyse_line_conf_room(str), NO_ANT, nb_max_ant));
}

t_room	*create_room_inter(char *str)
{
  return (create_room(analyse_line_conf_room(str), NO_ANT, ROOM_INTER_MAX_ANT));
}
