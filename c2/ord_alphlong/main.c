#include       <unistd.h>
#include       <stdlib.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    my_putchar(str[i++ ]);
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

int		compar(char *s1, char *s2)
{
  int		i;
  int		a;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      a = s1[i] - s2[i];
      if (a != 0)
	return (a);
      i++;
    }
  return (a);
}

char		**asc_ord(char **str)
{
  int		i;
  int		a;
  char		*tmp;
  int		b;

  b = 0;
  i = 0;
  while (str[i] != NULL && str[i + 1] != NULL)
    {
      if (my_strlen(str[i]) == my_strlen(str[i + 1]) && (my_strcmp(str[i], str[i + 1]) == 1))
	{
	  a = compar(str[i], str[i + 1]);
	  if (a > 0)
	    {
	      b++;
	      tmp = str[i];
	      str[i] = str[i + 1];
	      str[i + 1] = tmp;
	    }
	}
      i++;
    }
  if (b != 0)
    asc_ord(str);
  else
    return (str);
  return (str);
}

void		display(char **str)
{
  int		i;

  i = 0;
  while (str[i] != NULL && str[i + 1] != NULL)
    {
      if (my_strlen(str[i]) == my_strlen(str[i + 1]))
	{
	  my_putstr(str[i]);
	  my_putstr(" ");
	}
      else
	{
	  my_putstr(str[i]);
	  my_putstr("\n");
	}
      i++;
    }
  my_putstr(str[i]);
  my_putstr("\n");
}

void		ord_alphlong(char **str)
{
  int		i;
  char		*tmp;
  int		a;

  a = 0;
  i = 0;
  while (str[i] != NULL && str[i + 1] != NULL)
    {
      if (my_strlen(str[i]) > my_strlen(str[i + 1]))
	{
	  a++;
	  tmp = str[i];
	  str[i] = str[i + 1];
	  str[i + 1] = tmp;
	}
      i++;
    }
  if (a != 0)
    ord_alphlong(str);
  else if (str[i] != NULL)
    {
      str = asc_ord(str);
      display(str);
    }
  else
    my_putstr("\n");
}
int		main(int ac, char **av)
{
  char		**tab;

  if (ac != 2)
    {
      my_putchar('\n');
      return (0);
    }
  tab = str_to_wordtab(av[1]);
  ord_alphlong(tab);
  return (0);
}
