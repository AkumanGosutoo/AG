/*
** main.c for  in /home/chopar_a/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 27 15:22:45 2015 adrien chopard
** Last update Wed Apr 29 14:56:30 2015 chris arce
*/

#include <stdio.h>
#include <stdlib.h>
#include "lem_in.h"

int     open_file(char **argv)
{
  int	fp;

  fp = open("conf2.txt", O_RDONLY);
  if (fp == -1)
    {
      my_puterr("Echec lors de l'ouverture du fichier\n");
      exit(EXIT_FAILURE);
    }
  return (fp);
}

void    close_file(int fp)
{
  close(fp);
}

/*void verif_param(int argc, char** argv)
{
  if (argc == 2)
    load_configuration();
  else if (argc < 2)
    my_putstr("Many Parameters\n");
}*/


int	main(int argc, char** argv)
{
  /*verif_param(argc, argv);*/
  if (argc == 2)
    load_configuration();
  else if (argc > 2)
    {
      my_putstr("Too Many Parameters\n");
      return (1);
    }
  else if (argc < 2)
    {
      my_putstr("Too less Parameters\n");
      return (1);
    }
  /*display_configuration();*/
  return (0);
}
