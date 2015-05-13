/*
** my_show_wordtab.c for wordtab in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon May  4 15:15:06 2015 sirininh soumpholphakdy
** Last update Mon May  4 15:35:30 2015 sirininh soumpholphakdy
*/

#include <stdlib.h>

int	**my_show_wordtab(char **tab)
{
  int	a;

  a = 0;
  if (tab == NULL)
    return (NULL);
  while (tab[a] != NULL)
    {
      my_putchar(a + '0');
      my_putstr(tab[a]);
      my_putchar(' ');
      my_putchar('\n');
      a++;
    }
  return (NULL);
}

