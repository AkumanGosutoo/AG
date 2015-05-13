/*
** lem_in.h for  in /home/chopar_a/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 27 15:23:47 2015 adrien chopard
** Last update Tue Apr 28 13:57:09 2015 adrien chopard
*/

#ifndef LEM_IN_H_INCLUDED
#define LEM_IN_H_INCLUDED

#include "my_get_next_line.h"
#include "utils_malloc.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define COMMENT_CHAR    '#'
# define COMMENT_START	"##start"
#  define COMMENT_END	"##end"

#   define LINE_START	1
#    define LINE_END	2
#     define LINE_DATA	3

#      define DATA_ROOM_SEPARATOR_STRING	" "
#       define DATA_ROOM_SEPARATOR_CHAR		' '
#        define DATA_LINK_SEPARATOR_STRING	"-"

#         define NO_ANT			0
#          define ROOM_INTER_MAX_ANT	1

#           define FALSE	0
#            define TRUE	1

typedef struct t_room_param_tag
{
  char    *name;
  int     x;
  int     y;
} t_room_param;

typedef struct t_room_link_tag
{
  char    *name_room_one;
  char    *name_room_two;
} t_room_link;

typedef struct t_room_tag
{
  char		*name;
  int		x;
  int		y;
  int		nb_ant;
  int		nb_ant_max;
  int		nb_liens;
  struct t_room *links[256];
} t_room;

int		readFile();
/*struct*/ t_room	*create_room(t_room_param *current_param, int nb_ant, int nb_max_ant);
/*struct*/ t_room	*create_room_start(char *str, int nb_max_ant);
/*struct*/ t_room	*create_room_end(char *str, int nb_max_ant);
/*struct*/ t_room	*create_room_inter(char *str);

#endif /* !LEM_IN_H_ */
