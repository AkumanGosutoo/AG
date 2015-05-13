void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    my_putchar(str[i++]);
}

void		ulstr(char *str)
{
  int		i = 0;

  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar(str[i] - 32);
      else if (str[i] >= 'A' && str[i] <= 'Z')
	my_putchar(str[i] + 32);
      else
	my_putchar(str[i]);
      ++i;
    }
}

int		main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putstr("\n");
      return (0);
    }
  ulstr(av[1]);
  my_putstr("\n");
  return (0);
}
