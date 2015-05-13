#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

void		tab_mult(int nb)
{
  int		i = 1;
  int		res = 0;

  while (i < 10)
    {
      res = i * nb;
      printf("%d x %d = %d\n", i, nb, res);
      i++;
    }
}

int		main(int ac, char **av)
{
  if (ac != 2)
    {
      printf("\n");
      return (0);
    }
  tab_mult(atoi(av[1]));
  return (0);
}
