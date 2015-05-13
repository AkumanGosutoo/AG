#include	<stdlib.h>

static int	my_strlen(char *s)
{
  int		i;

  i = 0;
  if (s != NULL)
    {
      while (s[i])
	++i;
    }
  return (i);
}

static void	my_memset(char *s, char c, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      s[i] = c;
      ++i;
    }
}

static int	check_double(char c, char *s)
{
  int		i;

  i = 0;
  while (s[i])
    {
      if (s[i] == c)
	return (0);
      ++i;
    }
  return (1);
}

static void	my_union(char *s1, char *s2)
{
  int		i;
  int		j;
  char		res[5000];

  i = 0;
  j = 0;
  my_memset(res, 0, 5000);
  while (s1[i])
    {
      if (check_double(s1[i], res))
	{
	  res[j] = s1[i];
	  ++j;
	}
      ++i;
    }
  i = 0;
  while (s2[i])
    {     
      if (check_double(s2[i], res))
	{
	  res[j] = s2[i];
	  ++j;
	}
      ++i;
    }
  write(1, res, my_strlen(res));
}

int		main(int ac, char **av)
{
  if (ac == 3)
    my_union(av[1], av[2]);
  write(1, "\n", 1);
  return (1);
}
