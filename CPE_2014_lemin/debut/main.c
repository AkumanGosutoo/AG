/*
** main.c for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 20 17:22:36 2015 adrien chopard
** Last update Wed Apr 22 19:24:34 2015 adrien chopard
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lem_in.h"
#include "get_next_line.h"

int	error_fd(int fd)
{
  if (fd == -1)
    {
      my_putstr("ERROR -> Put the name of the file in argument !\n");
      return (1);
    }
}

int	main(int argc, char **argv)
{
  int	fd;
  char	*s;

  fd = open(argv[1], O_RDONLY);
  error_fd(fd);
  if (argc > 3)
    my_putstr("ERROR -> Too much argument");
  while ((s = get_next_line(fd)))
    {
      my_putstr(s);
      my_putchar('\n');
      free(s);
    }
  close(fd);
 return (0);
}
