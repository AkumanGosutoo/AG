/*
** Translator.c for Translator in /home/soumph_s/Translator
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sun Nov  9 15:31:29 2014 sirininh soumpholphakdy
** Last update Wed Nov 12 13:32:43 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

char	*arg(char *av1, char *av2, char *av3)
{
  int	a;
  int	b;
  int	c;

  while (av2[b] <= av1[a])
    {
      if (av2[b] < av1[a])
	{
	  b++;
	}
      if (av2[b] == av1[a])
	{
	  c = b;
	  my_putchar(av3[c]);
	  a++;
	  b = 0;
	}
    }
  if (av2[b] = av1[a])
    {
      my_putstr("error");
    }
}

int	main(int ac, char **av)
{
  arg(av[1], av[2], av[3]);
}
