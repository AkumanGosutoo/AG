#include <stdio.h>

#define VAL(x) ((x) - 48)

void  fprime(char *str);

int main(int ac, char **av)
{
  if (ac < 2)
    printf("\n");
  else
    fprime(av[1]);
}

void  fprime(char *str)
{
  int i = 0;
  int a = 2;
  int res = 1;
  int nb = 0;
  int val;
  while (str[i])
    {
      nb = (10 * nb) +  VAL(str[i]);
      ++i;
    }
  val = nb;
  while (res < val)
    {
      if (nb % a == 0)
	{
	  printf("%d", a);
	  res *=a;
	  nb = nb / a;
	  if (res != val)
	    printf("*");
	}
      else
	a += 1;
    }
  printf("\n");
}
