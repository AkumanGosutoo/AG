#include	<unistd.h>
#include	<stdlib.h>

static int	my_strlen(char *s)
{
  int		i;

  i = 0;
  if (s != NULL)
    {
      while (s[i])
	++i;
    }
  return (i);
}

static int	count_word(char *str)
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

static char	**str_to_wordtab(char *str)
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

static int	my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] == s2[i] || (s1[i] + 32) == s2[i] || (s1[i] - 32) == s2[i])
	++i;
      else
	return (1);
    }
  return (0);
}

static int	compare(char *s1, char *s2)
{
  int		i;
  int		a;
  char		a1;
  char		a2;

  i = 0;
  while (s1[i] && s2[i])
    {
      a1 = (s1[i] > 90 ? s1[i] - 32 : s1[i]);
      a2 = (s2[i] > 90 ? s2[i] - 32 : s2[i]);
      if ((a = a1 - a2) != 0)
	return (a);
      ++i;
    }
  return (a);
}

static void	sort_word(char **tab)
{
  int		i;
  char		*tmp;
  int		flag;

  i = 0;
  flag = 1;
  while (flag)
    {
      flag = 0;
      i = 0;
      while (tab[i] != NULL && tab[i + 1] != NULL)
	{
	  if (my_strcmp(tab[i], tab[i + 1]))
	    {
	      if (compare(tab[i], tab[i + 1]) > 0)
		{
		  ++flag;
		  tmp = tab[i];
		  tab[i] = tab[i + 1];
		  tab[i + 1] = tmp;
		}
	    }
	  ++i;
	}
    }
  i = 0;
  flag = 0;
  while (tab[i])
    {
      if (flag)
	write(1, " ", 1);
      write(1, tab[i], my_strlen(tab[i]));
      ++i;
      if (!flag)
	++flag;
    }
}

int		main(int ac, char **av)
{
  char		**tab;

  if (ac == 2)
    {
      tab = str_to_wordtab(av[1]);
      sort_word(tab);
    }
  write(1, "\n", 1);
  return (1);
}
