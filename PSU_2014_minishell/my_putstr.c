/*
** my_putstr.c for my_putstr in /home/houtin_r/
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Fri Mar 15 12:45:19 2013 raphael houtin
** Last update Fri Jun  7 12:30:27 2013 raphael houtin
*/

#include	<stdlib.h>

int	my_putstr(char *str)
{
  int	c;

  c = 0;
  
  while (*(str + c) != '\0')
    {
      my_putchar(*(str + c));
      c = c + 1;
    }
}
