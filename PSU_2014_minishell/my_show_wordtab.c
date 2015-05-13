/*
** my_show_wordtab.c for show_wordtab in /home/gonon_c//rendu/lib/my
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Wed May  8 15:50:52 2013 raphael houtin
** Last update Tue May 28 18:05:12 2013 raphael houtin
*/

#include <stdlib.h>

int		**my_show_wordtab(char **tab)
{
  int		i;

  i = 0;
  if (tab == NULL)
    return (NULL);
  while (tab[i] != NULL)
    {
      my_putchar(i + '0');
      my_putchar(' ');
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (NULL);
}
