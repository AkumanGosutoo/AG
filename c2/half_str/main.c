void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int i = 0;

  while (str[i] != 0)
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putstr("\n");
      return 0;
    }
  else
    {
      int i = 1;
      int c = 0;
      while (av[i])
	{
	  c = 0;
	  while (av[i][c] != 0)
	    {
	      if (c % 2 == 0)
	      	my_putchar(av[i][c]);
	      ++c;
	    }
	  my_putstr("\n");
	  ++i;
	}
    }
}
