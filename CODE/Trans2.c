/*
** Trans2.c for FFD in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Nov  4 15:29:11 2014 sirininh soumpholphakdy
** Last update Sat Nov  8 12:59:20 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	*arg(char *av1, char *av2, char *av3)
{
  int	a;
  int	b;
  int	c;

  b = c;
  while (av2[b] <= av1[a])
    {
      if (av2[b] < av1[a])
	{
	  b++;
	}
      if (av2[b] == av1[a])
	{
	  my_putchar(av3[b]);
	  a++;
	  b = 0;
	}
    }
}

int	main(int ac, char **av)
{
  arg(av[1], av[2], av[3]);
}
