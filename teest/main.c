/*
** main.c for dattest12 in /home/soumph_s/Piscine_C_J11
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Oct 21 14:40:07 2014 sirininh soumpholphakdy
** Last update Wed Oct 22 09:24:23 2014 sirininh soumpholphakdy
*/

#include <stdlib.h>
#include "list.h"

int	main()
{
  struct s_list *list;

  list = NULL;
  my_put_in_list(&list, "Toto",11);
  my_put_in_list(&list, "Titi",12);

  my_show_list(list);

  return (0);
}
