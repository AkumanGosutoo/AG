int	my_getnbr(char *str)
{
  int	res;
  int	pow;
  int	count;

  count = 0;
  pow = 1;
  res = 0;
  while (str[count] != '\0')
    {
      pow = pow * 10;
      count += 1;
    }
  count = 0;
  pow = pow / 10;
  while (str[count] != '\0')
    {
      if (str[count] < 48 || str[count] > 57)
	return (res / pow / 10);
      res = (str[count] - '0') * pow + res;
      pow /= 10;
      count += 1;
    }
  return (res);
}
