/*
** my_put_in_list.c for dayday in /home/soumph_s/Piscine_C_J11
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Oct 21 14:44:31 2014 sirininh soumpholphakdy
** Last update Tue Oct 21 14:51:47 2014 sirininh soumpholphakdy
*/

#include <stdlib.h>
#include "list.h"

int		my_put_in_list(struct s_list **list, char *name, int age)
{
  struct s_list *elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->name = name;
  elem->age = age;
  elem->next = *list;
  *list = elem;

  return (0);
}

void		my_show_list(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->name);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
