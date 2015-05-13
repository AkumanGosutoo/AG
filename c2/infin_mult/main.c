#include        <stdlib.h>
#include        <unistd.h>
#include	<string.h>

int     get_sign(char **n1, char **n2)
{
  int   s1;
  int   s2;

  s1 = 1;
  s2 = 1;
  if (**n1 == '-')
    {
      s1 = -1;
      ++(*n1);
    }
  if (**n2 == '-')
    {
      s2 = -1;
      ++(*n2);
    }
  return (s1 * s2);
}

int     infin_mult(char *n1, char *n2)
{
  int   s;
  int   l1;
  int   l2;
  int   l;
  int   *res;
  char  *r;
  int   p1;
  int   p2;

  s = get_sign(&n1, &n2);
  l1 = strlen(n1);
  l2 = strlen(n2);
  l = l1 + l2 + 1;
  res = malloc(l * sizeof(*res));
  memset(res, 0, l);
  r = malloc((l + 1) * sizeof(*r));
  p1 = l1 - 1;
  while (p1 >= 0)
    {
      p2 = l2 - 1;
      while (p2 >= 0)
        {
          res[p1 + p2 + 1] += (n1[p1] - '0') * (n2[p2] - '0');
          res[p1 + p2] += res[p1 + p2 + 1] / 10;
          res[p1 + p2 + 1] = res[p1 + p2 + 1] % 10;
          --p2;
        }
      --p1;
    }
  if (s == -1)
    putchar('-');
  p2 = l - 1;
  while (p2 >= 0)
    {
      r[p2] = res[p2] + '0';
      --p2;
    }
  free(res);
  p2 = 0;
  while (p2 < l - 1)
    {
      putchar(r[p2]);
      ++p2;
    }
  putchar('\n');
  free(r);
  return (0);
}

int     main(int ac, char **av)
{
  return ((ac == 3) ? infin_mult(av[1], av[2]) : putchar('\n'));
}
