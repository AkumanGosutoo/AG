/*
** my_display.c for  in /home/chopar_a/rendu/CPE_2014_lemin
**
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
**
** Started on  Fri Apr 17 15:46:15 2015 adrien chopard
** Last update Wed Apr 22 13:58:15 2015 adrien chopard
*/

#include "my_display.h"

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
      i = i + 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int     my_puterr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    {
      if (write(2, &str[i++], 1) == -1)
        my_error_exit(ERR_WRITE);
    }
  return (0);
}

int	my_putnbr(int nb)
{
  if (nb == -2147483648)
    my_putstr("-2147483648");
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb > 9)
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  else
    my_putchar(48 + nb);
  return (0);
}
