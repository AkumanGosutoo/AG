/*
** list.h for listtest in /home/soumph_s/Piscine_C_J11
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Oct 21 14:22:07 2014 sirininh soumpholphakdy
** Last update Wed Oct 22 20:30:33 2014 sirininh soumpholphakdy
*/

#ifndef LIST_H_
# define LIST_H_

struct		s_list
{
  char		*ac;
  int		av;
  struct s_list *next;
};

int		my_put_in_list(struct s_list **list, char *ac, int av);

#endif /* LIST_H_ */
