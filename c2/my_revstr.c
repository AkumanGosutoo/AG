/*
** my_revstr.c for my_revstr in /home/daoud_c/Bistromathique
** 
** Made by chihabeeddine daoud
** Login   <daoud_c@epitech.net>
** 
** Started on  Sun Nov  9 18:30:40 2014 chihabeeddine daoud
** Last update Mon Feb 23 17:29:19 2015 chihabeeddine daoud
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

/* char	*my_revstr(char *str) */
/* { */
/*   int	b; */

/*   b = my_strlen(str) - 1; */
/*   while (str[b] != '\0') */
/*     my_putchar(str[b--]); */
/* } */

char	*my_revstr(char *str)
{
  char	c;
  int	a;
  int	b;

  a = 0;
  b = my_strlen(str) - 1;
  while (a < b)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a++;
      b--;
    }
  return (str);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    {
      my_putchar('\n');
      return (0);
    }
  my_putstr(my_revstr(av[1]));
  return (0);
}
