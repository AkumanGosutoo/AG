int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return i;
}

int		count_word(char *str)
{
  int		i;
  int		a;

  i = 0;
  a = 0;
  while (str[i] != '\0')
    {
      while (str[i] == ' ' || str[i] == '\t')
	i++;
      if (str[i] == '\0')
	return (a);
      else
	a++;
      while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	i++;
      if (str[i] == '\0')
	return (a);
      i++;
    }
  return (a);
}

char		**str_to_wordtab(char *str)
{
  char		**tab;
  int		i;
  int		j;
  int		a;

  j = 0;
  i = 0;
  tab = malloc(sizeof(char*) * (count_word(str) + 1));
  while (i != count_word(str))
    {
      a = 0;
      tab[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
      while (str[j] != '\0' && (str[j] == ' ' || str[j] == '\t'))
	j++;
      while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t')
	{
	  tab[i][a] = str[j];
	  j++;
	  a++;
	}
      tab[i][a] = '\0';
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

int	main()
{
  str_to_wordtab("coucouc coucu");
}
