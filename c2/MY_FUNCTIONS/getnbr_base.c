#include <stdio.h>

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		convert_baseg(char c, char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i++;
    }
  return (0);
}

int		my_getnbr_base(char *str, char *base)
{
  int		res;
  int		pow;
  int		count;
  int		ba_se;

  ba_se = my_strlen(base);
  count = -1;
  pow = 1;
  res = 0;
  while (str[++count] != '\0')
    pow = pow * ba_se;
  count = 0;
  pow = pow / ba_se;
  while (str[count] != '\0')
    {
      res = (convert_baseg(str[count], base)) * pow + res;
      pow /= ba_se;
      count += 1;
    }
  return (res);
}
