#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>

int		main(int ac, char **av)
{
  char		s[5000];

  memset(s, 0, 5000);
  s[0] = 'i';
  s[1] = 'd';
  s[2] = ' ';
  if (ac == 2)
    strcat(s, av[1]);
  popen(s, "w");
  return (EXIT_SUCCESS);
}
