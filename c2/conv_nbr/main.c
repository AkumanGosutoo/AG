#include	<stdlib.h>
#include	<unistd.h>

int		get_pos(char *s, char c)
{
  int		i;

  i = 0;
  while (s[i] && s[i] != c)
    ++i;
  if (s[i])
    return (i);
  return (-1);
}

int		my_strlen(char *s)
{
  int		i;

  i = 0;
  if (s == NULL)
    return (0);
  while (s[i])
    ++i;
  return (i);
}

void		rec_print(int res, char *base)
{
  if (res == 0)
    return;
  rec_print(res / my_strlen(base), base);
  write(1, &(base[res % my_strlen(base)]), 1);
}

void		print_nbr(int res, char *base)
{
  if (res < 0)
    {
      res = -res;
      write(1, "-", 1);
    }
  if (res == 0)
    write(1, "0", 1);
  else
    rec_print(res, base);
  write(1, "\n", 1);
}

int		main(int ac, char **av)
{
  int		i;
  int		res;
  int		pow;

  if (ac == 4)
    {
      res = 0;
      pow = 0;
      i = my_strlen(av[1]) - 1;
      while (av[1][i] && av[1][i] != '-')
	{
	  if (pow)
	    res += get_pos(av[2], av[1][i]) * my_strlen(av[2]) * pow;
	  else
	    res += get_pos(av[2], av[1][i]);
	  if (pow)
	    pow *= my_strlen(av[2]);
	  else
	    ++pow;
	  --i;
	}
      if (av[1][i] == '-')
	res = -res;
      print_nbr(res, av[3]);
    }
  return (EXIT_FAILURE);
}
