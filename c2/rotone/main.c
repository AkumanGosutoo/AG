int		my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac < 2 || av[1][0] == 0)
    return (my_putchar('\n'));
  int		i = 0;

  while (av[1][i])
    {
      if (av[1][i] == 'z' || av[1][i] == 'Z')
	my_putchar(av[1][i] - 25);
      else if ((av[1][i] >= 'a' && av[1][i] < 'z') || (av[1][i] >= 'A' && av[1][i] < 'Z'))
	my_putchar(av[1][i] + 1);
      else
	my_putchar(av[1][i]);
      i++;
    }
  return (my_putchar('\n'));
}
