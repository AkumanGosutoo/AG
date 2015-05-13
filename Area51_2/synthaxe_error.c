/*
** synthaxe_error.c for synthaxe_error in /home/lahmar.k/Projet_Tek1_semestre1/Area51
** 
** Made by kamel lahmar
** Login   <lahmar_k@epitech.net>
** 
** Started on  Sat Jan  3 12:08:17 2015 kamel lahmar
** Last update Sat Jan  3 18:31:42 2015 kamel lahmar
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/area51.h"

void	init_types(char *(types_tab[NB_TYPES]))
{
  types_tab[0] = "int";
  types_tab[1] = "unsigned int";
  types_tab[2] = "char";
  types_tab[3] = "unsigned char";
  types_tab[4] = "float";
  types_tab[5] = "unsigned float";
  types_tab[6] = "double";
  types_tab[7] = "unsigned double";
  types_tab[8] = "long";
  types_tab[9] = "long int";
  types_tab[10] = "lon long int";
  types_tab[11] = "long long";
  types_tab[12] = "short";
  types_tab[13] = "short int";
  types_tab[14] = "unsigned long";
  types_tab[15] = "unsigned long long";
  types_tab[16] = NULL;
}

char	*get_types(char *str, char *tab_synthaxe[20])
{
  int	i;
  char	*my_types;

  i = 0;
  if (!(my_types = malloc(sizeof(char))))
    {
      fprintf(stderr, "could not alloc\n");
      return (NULL);
    }
  while (tab_synthaxe[i] != NULL)
    {
      if (strncmp(str, tab_synthaxe[i], strlen(tab_synthaxe[i])) == 0)
	strncpy(my_types, str + i, strlen(tab_synthaxe[i]));
      i++;
    }
  return (my_types);
}

char	*get_name(char *str)
{
  int	i;
  int	n;
  char	*my_name;

  i = 0;
  n = 0;
  if (!(my_name = malloc(sizeof(char))))
    {
      fprintf(stderr, "could not alloc\n");
      return (NULL);
    }
  while (str[i] != ' ')
    i++;
  while (str[i] == ' ')
    i++;
  while (str[i] != ';')
      my_name[n++] = str[i++];
  my_name[n] = 0;
  return (my_name);
}

int	get_parenthesis(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '(')
	return (1);
      i++;
    }
  return (0);
}
