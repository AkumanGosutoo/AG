void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		epur_str(char *str)
{
  int		i = 0;
  int		check = 0;
  int		start = 0;

  while (str[i] != '\0')
    {
      check = 0;
      while (str[i] == '\t' || str[i] == ' ')
	{
	  check = 1;
	  i++;
	}
      if (str[i] == '\0')
	return ;
      else if (check == 1 && start != 0)
	my_putchar(' ');
      my_putchar(str[i++]);
      start = 1;
    }
}

int		main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putchar('\n');
      return (0);
    }
  epur_str(av[1]);
  my_putchar('\n');
  return (0);
}
