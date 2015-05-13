/*
** main.c for main_for_area51 in /home/lahmar.k/Projet_Tek1_semestre1/Area51
** 
** Made by kamel lahmar
** Login   <lahmar_k@epitech.net>
** 
** Started on  Sat Jan  3 00:57:30 2015 kamel lahmar
** Last update Sat Jan  3 03:00:04 2015 kamel lahmar
*/

#include <stdio.h>
#include "include/area51.h"

int	manage_error(int argc, char **argv)
{
  if (argc != 2)
    {
      printf("\n");
      return (1);
    }
  if(synthaxe_error(argv[1]) == 1)
    return (1);
  return (0);
}

int	main(int argc, char **argv)
{
  if (manage_error(argc, argv) == 1)
    return (1);
  return (0);
}
