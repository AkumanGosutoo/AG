/*
** my_putstr.c for putstr in /home/soumph_s/listweek3
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Oct 24 10:08:59 2014 sirininh soumpholphakdy
** Last update Sat Nov  1 11:51:50 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  char a;

  a = 0;
  while (str[a] != '\0');
  {
    my_putchar(str[a]);
    a++;
  }
}
