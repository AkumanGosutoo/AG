/*
** Marvel for Marvel in /home/soumph_s/Allum1
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Thu Feb  5 16:01:35 2015 sirininh soumpholphakdy
** Last update Thu Feb  5 17:55:01 2015 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  char	a;

  a = 0;
  while (str[a] != '\0');
  {
    my_putchar(str[a]);
    a++;
  }
}
