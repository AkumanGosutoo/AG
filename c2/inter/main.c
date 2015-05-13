#include	<unistd.h>
#include	<stdlib.h>

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

int		is_in_tab(char c, char *tab, int len)
{
  int		i = 0;

  if (len == 0)
    return 0;
  while (i < len)
    {
      if (tab[i] == c)
	return 1;
      ++i;
    }
  return 0;
}

int		main(int ac, char **av)
{
  if (ac <= 2)
    {
      my_putstr("\n");
      return 0;
    }
  char		*tab = malloc(128);
  int		i = 0;
  int		j = 0;
  int		k = 0;

  while (av[1][i])
    {
      j = 0;
      while (av[2][j])
	{
	  if (av[1][i] == av[2][j] && is_in_tab(av[1][i], tab, k) == 0)
	    {
	      tab[k] = av[1][i];
	      ++k;
	    }
	  ++j;
	}
      ++i;
    }
  tab[k] = 0;
  my_putstr(tab);
  my_putstr("\n");
}
