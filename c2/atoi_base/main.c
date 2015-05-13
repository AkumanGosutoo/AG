int my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int is_digit(char c, char *base)
{
  int i;

  i = 0;
  while (base[i] != '\0')
    {
      if (base[i] == c)
	return (42);
      i++;
    }
  return (0);
}

int digit_to_val(char c, char *base)
{
  int i;

  i = 0;
  while (base[i] != '\0')
    {
      if (base[i] == c)
	return (i);
      i++;
    }
  return (i);
}

int my_atoi_base(char *nb, char *base)
{
  int res;
  int sign;
  int i;
  int len;

  i = 0;
  res = 0;
  sign = 1;
  len = my_strlen(base);
  while (nb[i] != '\0' && (nb[i] == '-' || nb[i] == '+'))
    if (nb[i++] == '-')
      sign = -sign;
  while (nb[i] != '\0' && is_digit(nb[i], base))
    {
      res = res * len + digit_to_val(nb[i], base);
      i++;
    }
  return (res * sign);
}
