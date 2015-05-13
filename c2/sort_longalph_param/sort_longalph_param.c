#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	<stdlib.h>

int		my_strlen(char *str)
{
  int		i = 0;

  while (str[i] != '\0')
    {
      ++i;
    }
  return (i);
}

void		my_putstr(char *str)
{
  int		i = 0;

  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      ++i;
    }
}

char		**to_wordtab(char *str)
{
  int		len = my_strlen(str);
  char		**tab;
  int		i = 1;
  char		*tmp = NULL;
  
  tab = malloc(sizeof(*tab) * len);
  tmp = strtok(str, " \t");
  if (tmp == NULL)
    return (NULL);
  else 
    tab[0] = tmp;
  while ((tmp = strtok(NULL, " \t")) != NULL)
    {
      tab[i] = tmp;
      ++i;
    }
  tab[i] = NULL;
  return tab;
}

int		tab_len(char **tab)
{
  int		i = 0;
  while (tab[i])
    {
      i++;
    }
  return (i);
}

static int  cmpstringp(const void *p1, const void *p2)
 {
   return strcasecmp(* (char * const *) p1, * (char * const *) p2);
 }

static int  cmpslongstringp(const void *p1, const void *p2)
 {
   if (my_strlen(* (char * const *) p1) < my_strlen(* (char * const *) p2))
     return 0;
   return 1;
 }


void		aff_tab(char **tab)
{
  int		i = 0;

  while (tab[i] && tab[i + 1] != NULL)
    {
      my_putstr(tab[i]);
      if (my_strlen(tab[i]) == my_strlen(tab[i + 1]))
	my_putstr(" ");
      else 
	my_putstr("\n");
      ++i;
    }
  my_putstr(tab[i]);
}

char		**sort_tab(char **tab)
{
  int		i = 0;
  char		*tmp;
  int		check = 0;

  
  while (tab[i] && tab[i + 1])
    {
      if (my_strlen(tab[i]) > my_strlen(tab[i + 1]))
	{
	  tmp = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = tmp;
	  check = 1;
	      
	}
      i++;
    }
  if (check == 1)
    {
      tab = sort_tab(tab);
    }
  return (tab);
}

int		main(int ac, char **av)
{
  char		**tab = malloc(sizeof(char *) * ac);
  int		i = 1;
  int		j = 0;

  if (ac < 2)
    {
      my_putstr("\n");
      return 0;
    }
  if (av[1] == NULL)
    {
      my_putstr("\n");
      return 0;
    }
  while (i < ac)
    {
      if (av[i] != NULL)
	tab[j] = strdup(av[i]);
      j++;
      ++i;
    }
  tab[i] = NULL;
  qsort(&tab[0], tab_len(tab), sizeof(char *), cmpstringp);
  tab = sort_tab(tab);
  aff_tab(tab);
  my_putstr("\n");
  return 0;
}
