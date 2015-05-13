/*
** manage_types.c for manage_types in /home/lahmar.k/Projet_Tek1_semestre1/Area51
** 
** Made by kamel lahmar
** Login   <lahmar_k@epitech.net>
** 
** Started on  Sat Jan  3 10:09:12 2015 kamel lahmar
** Last update Sat Jan  3 15:08:47 2015 kamel lahmar
*/

#include <stdio.h>
#include "include/area51.h"

int	manage_types(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ';')
	return (0);
      i = i + 1;
    }
  printf("Il manque un point virgule\n");
  return (1);
}
