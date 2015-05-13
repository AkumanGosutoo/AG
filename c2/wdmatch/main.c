int		my_strlen(char *str)
{
  int		i = 0;

  while (str[i])
    i++;
  return i;
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int		wdmatch(char *s1, char *s2)
{
  int	i = 0;
  int	j = 0;

  while (s2[j])
    {
      if (s1[i] == s2[j])
	i++;
      j++;
    }
  if (i == my_strlen(s1))
    return 0;
  else
    return 1;
}

int		main(int ac, char **av)
{
  if (ac != 3)
    {
      my_putstr("\n");
      return 0;
    }
  if (!(wdmatch(av[1], av[2])))
    my_putstr(av[1]);
  my_putstr("\n");
}
