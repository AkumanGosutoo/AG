/*
** baton.c for ntm in /home/soumph_s/testFUCK
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Thu Feb 12 16:33:12 2015 sirininh soumpholphakdy
** Last update Thu Feb 12 16:34:59 2015 sirininh soumpholphakdy
*/

#include <stdlib.h>

int     tableau()
{
  char **tab;
  int   a;

  tab = malloc (sizeof(char) * 50);
  tab[0] = "|\n";
  tab[1] = "||\n";
  tab[2] = "|||\n";
  tab[3] = "||||\n";
  tab[4] = "|||||\n";
  tab[5] = "||||||\n";

  a = 0;
  while (a <= 5)
    {
      my_putstr(tab[a]);
      a++;
    }
  free(tab);
}

int     main()
{
  tableau();
  return (0);
}
