#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i = 0;
  while (str[i])
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		aff_tab(char **tab)
{
  int		i = 0;
  while (tab[i])
    {
      printf("%s\n", tab[i]);
      i++;
    }
}

void		conta(char **tab, int x, int y, char c, int tablen)
{
  tab[y][x] = c;
  if (y > 0 && tab[y - 1][x] == 'X')
    conta(tab, x, y - 1, c, tablen);
  if (x > 0 && tab[y][x - 1] == 'X')
    conta(tab, x - 1, y, c, tablen);
  if (y != tablen - 1 && tab[y + 1][x] == 'X')
    conta(tab, x, y + 1, c, tablen);
  if (tab[y][x + 1] != 0 && tab[y][x + 1] == 'X')
    conta(tab, x + 1, y, c, tablen);
}

void		count_island(char **tab)
{
  int		tablen = 0;
  int		y = 0;
  int		x = 0;
  char		c = '0';

  while (tab[tablen])
    tablen++;
  while (tab[y])
    {
      x = 0;
      while (tab[y][x])
	{
	  if (tab[y][x] == 'X')
	    {
	      conta(tab, x, y, c, tablen);
	      c++;
	    }
	  x++;
	}
      y++;
    }
}

int		main(int ac, char **av)
{
  if (ac < 2 || av[1][0] == 0)
    return (my_putchar('\n'));
  int		r;
  int		fd;
  char		buff[5001];
  char		**tab;

  if ((fd = open(av[1], O_RDONLY)) == -1)
    return (my_putchar('\n'));
  if ((r = read(fd, buff, 5000)) == -1 || r == 0)
    {
      printf("Read fail\n");
      return (my_putchar('\n'));
    }
  buff[r] = 0;

  int		x = 0;
  int		y = 0;
  r = 0;
  tab = malloc (1000 * sizeof (char *));
  tab[0] = malloc (1024);
  while (buff[r])
    {
      if (buff[r] == '\n')
	{
	  tab[y][x] = 0;
	  y++;
	  tab[y] = malloc(1024);
	  x = 0;
	  r++;
	}
      tab[y][x] = buff[r];
      x++;
      r++;
    }
  tab[y] = 0;
  count_island(tab);
  aff_tab(tab);
}
