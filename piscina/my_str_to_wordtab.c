/*
** my_str_to_wordtab.c for wordtabb in /home/soumph_s/piscina
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon May  4 15:36:46 2015 sirininh soumpholphakdy
** Last update Mon May  4 15:44:48 2015 sirininh soumpholphakdy
*/

#include <stdlib.h>

int	trouver_mot(char *str)
{
  int	a;
  int	nb;

  a = 0;
  nb = 0;
  while (str[a] != '\0')
    {
      if ((str[a] >= 48 && str[a] <= 57) || (str[a] >= 65 && str[a] <= 90)
	  || (str[a] >= 97 && str[a] <= 122))
	{
	  while ((str[a] >= 48 && str[a] <= 57) || (str[a] >= 65 && str[a] <= 90)
		 || (str[a] >= 97 && str[a] <= 122))
	    a++;
	  nb++;
	}
      a++;
    }
  return(nb);
}

char	**my_str_to_wordtab(char *str)
{
  char **tab;
  int	nb;
  int	a;
  int	b;
  int	c;

  a = 0;
  c = 0;
  nb = find_word(str);
