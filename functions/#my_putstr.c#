/*
** my_putstr.c for my_putstr in /home/soumph_s/functions
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sat Oct 11 09:49:46 2014 sirininh soumpholphakdy
** Last update Sat Oct 11 16:57:36 2014 sirininh soumpholphakdy
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;
  int	g;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  g = i - 1;
  i = 0;
  while (i != g)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  my_putchar('\n');
}

int	main()
{
  my_putstr("epepqsdfghjk");
}
