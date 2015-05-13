/*
** day08.c for day08 in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Wed Oct  8 20:57:36 2014 sirininh soumpholphakdy
** Last update Wed Oct  8 21:18:11 2014 sirininh soumpholphakdy
*/

#include <stdlib.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;
  
  i = 0;
  while(str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	main()
{
  int	length;
  char *str;

  length = 5;
  str = malloc(length);
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = 'd';
  str[4] = '\0';
  my_putstr(str);
  free(str);
}
