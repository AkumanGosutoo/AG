/*
** mabeat.c for ma beat in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Oct  6 09:51:15 2014 sirininh soumpholphakdy
** Last update Thu Nov 13 14:09:03 2014 sirininh soumpholphakdy
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
