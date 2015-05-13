/*
** my_strdup.c for my_strdup in /home/houtin_r//my
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Fri Jun  7 12:03:42 2013 raphael houtin
** Last update Fri Jun  7 12:39:57 2013 raphael houtin
*/

#include <stdlib.h>

char *my_strdup(char *str)
{
  char *dest;
  int	i;

  i = 0;
  dest = malloc(my_strlen(str));
  while (i <= my_strlen(str))
    {
      dest[i] = str[i];
    }
  return (dest);
}
