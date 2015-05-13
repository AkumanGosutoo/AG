#include		<stdlib.h>
#include		<stdio.h>

static int		count_nb(int nb)
{
  int		i;

  i = 0;
  while (nb < 10)
    {
      nb /= 10;
      i++;
    }
  return (i + 1);
}

char		*itoa(int nb)
{
  char		*str;
  int		i;

  i = count_nb(nb);
  str = malloc(sizeof(*str) * (i + 1));
  str[i + 1] = '\0';
  while (i >= 0)
    {
      str[i] = nb % 10 + 48;
      nb /= 10;
      i -= 1;
    }
  return (str);
}
