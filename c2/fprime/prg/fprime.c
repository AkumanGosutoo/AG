/*
** fprime.c for mad in /home/soumph_s/c2/fprime/prg
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Apr  7 20:31:23 2015 sirininh soumpholphakdy
** Last update Tue Apr  7 20:32:55 2015 sirininh soumpholphakdy
*/

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
  int	i;

  for (i = 2; i < nb; i++)
    if (!(nb % i))
      return (0);
  return (1);
}

void	decompose(int nb)
{
  int	i;
  int	flag;

  if (nb == 0 || nb == 1)
    {
      printf("%d", nb);
      return;
    }
  flag = 0;
  while (nb > 1)
    {
      for (i = 2; i <= nb; i++)
	{
	  if (!(nb % i) && is_prime(i))
	    {
	      if (!flag)
		{
		  flag = 1;
		  printf("%d", i);
		}
	      else
		printf("*%d", i);
	      nb = nb / i;
	      break;
	    }
	}
    }
}

int	main(int ac, char **av)
{
  if (ac == 2)
    decompose(atoi(av[1])); /* add a is_number? */
  printf("\n");
}
