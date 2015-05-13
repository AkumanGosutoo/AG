/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/rafoon/piscine/jour8
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Wed May 15 16:58:52 2013 raphael houtin
** Last update Fri Jun  7 12:41:40 2013 raphael houtin
*/

#include <stdlib.h>

int	find_word(char *str)
{
  int	i;
  int	nb;


  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	  || (str[i] >= 97 && str[i] <= 122))
	{
	  while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
		 || (str[i] >= 97 && str[i] <= 122))
	    i++;
	  nb++;
	}
      i++;
    }
  return (nb);
}

char    **my_str_to_wordtab(char *str)
{
  char **tab;
  int	nb;
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  nb = find_word(str);
  tab = malloc(sizeof(char *) * nb + 1);
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * my_strlen(str));
      while ((str[i] <= '/' && str[i] >= 32) || (str[i] <= '@' && str[i] >= ':' ) ||
	     (str[i] <= '`' && str[i] >= '[') || (str[i] <= 127 && str[i] >= '{'))
	i++;
      j = 0;
      while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90)
	     || (str[i] >= 97 && str[i] <= 122))
	{
	  tab[k][j] = str[i];
	  i++;
	  j++;
	}
      k++;
    }
  tab[k] = NULL;
  my_show_wordtab(tab);
  return (tab);
}
