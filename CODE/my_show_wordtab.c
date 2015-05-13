/*
** my_show_wordtab.c for wordtab in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon May  4 15:15:06 2015 sirininh soumpholphakdy
** Last update Mon May  4 15:31:38 2015 sirininh soumpholphakdy
*/

#include <stdlib.h>

int	**my_show_wordtab(char **tab)
{
  int	a;

  i = 0;
  if (tab == NULL)
    return (NULL);
  while (tab[i] != NULL)
    {
      my_putchar(i + '0');
      my_putstr(tab[i]);
      my_putchar(' ');
      my_putchar('\n');
      i++;
    }
  return (NULL);

int	main()
{
  my_show_wordtab();
}

