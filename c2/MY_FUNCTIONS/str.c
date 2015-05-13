void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] == s2[i] || (s1[i] + 32) == s2[i]  || (s1[i] - 32) == s2[i])
	i++;
      else
	return (1);
    }
  return (0);
}
