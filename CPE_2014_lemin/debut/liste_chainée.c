/*
** liste_chainée.c for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Fri Apr 17 16:54:11 2015 adrien chopard
** Last update Fri Apr 17 19:58:56 2015 adrien chopard
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
}		t_list;

void	add_elem_to_list(char *arg, t_list **my_list)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp->data = strdup(arg);
  tmp->next = *my_list;
  *my_list = tmp;
}

void	show_list(t_list *my_list)
{
  t_list	*tmp;
  
  tmp = my_list;
  while (tmp != '\0')
    {
      printf("%s\n", tmp->data);
      tmp = tmp->next;
    }
}

int	main(int argc, char **argv)
{
  t_list	*my_list;
  int		cpt;

  my_list = NULL;  
  cpt = 1;
  while (cpt < argc)
    {
      add_elem_to_list(argv[cpt], &my_list);
      cpt = cpt + 1;
    }
  show_list(my_list);
}
