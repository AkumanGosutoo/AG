#include	<unistd.h>

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

int		main(int ac, char **av)
{
  if (ac == 1)
    {
      my_putstr("\n");
      return 0;
    }
  else if (ac == 2)
    {
      my_putstr("0\n");
      return 0;
    }
  int		i = 0;
  int		j = 0;

  while (av[2][i])
    {
      if (av[2][i] == av[1][j])
	j++;
      i++;
    }
  if (j == my_strlen(av[1]))
    my_putstr("1\n");
  else
    my_putstr("0\n");
}
