/*
** str_to_wordtab.c for str_to_wordtab in /home/tavukc_k/C/MY_FUNCTIONS
**
** Made by tavukc_k
** Login   <tavukc_k@epitech.net>
**
** Started on  Sun Dec 15 12:07:27 2013 tavukc_k
** Last update Sun Dec 15 12:09:44 2013 tavukc_k
*/

#include <stdlib.h>

int		count_word(char *str)
{
  int		i;
  int		a;

  i = 0;
  a = 0;
  while (str[i] != '\0')
    {
      while (str[i] == ' ' || str[i] == '\t')
	i++;
      if (str[i] == '\0')
	return (a);
      else
	a++;
      while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	i++;
      if (str[i] == '\0')
	return (a);
      i++;
    }
  return (a);
}

char		**str_to_wordtab(char *str)
{
  char		**tab;
  int		i;
  int		j;
  int		a;

  j = 0;
  i = 0;
  if (tab = malloc(sizeof(char *) * (count_word(str) + 1)) == NULL)
    return (NULL);
  while (i != count_word(str))
    {
      a = 0;
      if (tab[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
      while (str[j] != '\0' && (str[j] == ' ' || str[j] == '\t'))
	j++;
      while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t')
	{
	  tab[i][a] = str[j];
	  j++;
	  a++;
	}
      tab[i][a] = '\0';
      i++;
    }
  tab[i] = NULL;
  return (tab);
}
