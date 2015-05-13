/*
** str.c for daydyaa in /home/soumph_s/Piscine_C_J11
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Oct 21 14:52:03 2014 sirininh soumpholphakdy
** Last update Tue Oct 21 14:56:01 2014 sirininh soumpholphakdy
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
