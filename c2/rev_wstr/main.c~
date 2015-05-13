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

int		main(int ac, char **av)
{
  int		i;
  int		len;
  int		flag;

  i = 0;
  flag = 0;
  if (ac == 2)
    {
      len = my_strlen(av[1]);
      if (len == 0)
	{
	  write(1, "\n", 1);
	  return (1);
	}
      while (i < len)
	{
	  if (av[1][i] == ' ' ||
	      av[1][i] == '\t' ||
	      av[1][i] == '\n')
	    av[1][i] = '\0';
	  ++i;
	}
      while (len >= 0)
	{
	  while (len >= -1 && !av[1][len])
	    --len;
	  while (len >= -1 && av[1][len])
	    --len;
	  if (flag && len >= -1)
	    write(1, " ", 1);
	  if (av[i][len + 1])
	    {
	      write(1, &av[1][len + 1], my_strlen(&av[1][len + 1]));
	      if (flag == 0)
		flag++;
	    }
	}
    }
  write(1, "\n", 1);
  return (1);
}
