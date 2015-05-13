/*
** manage_error.c for manage_error in /home/lahmar.k/Projet_Tek1_semestre1/Area51
** 
** Made by kamel lahmar
** Login   <lahmar_k@epitech.net>
** 
** Started on  Sat Jan  3 01:48:06 2015 kamel lahmar
** Last update Sat Jan  3 16:19:25 2015 kamel lahmar
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "include/area51.h"

void    early_space(char *str)
{
  int   i;

  i = 0;
  if (str[0] == ' ')
  {
    while (str[i] != '\0' && str[i] == ' ')
      i = i + 1;
    printf("Vous avez %d espace en trop au début de la chaine\n", i);
    exit(0);
  }
}

int	synthaxe_error(char *str)
{
  char  *tab_synthaxe[20];

  int   i;
  int   alright;

  alright = 0;
  i = 0;
  init_types(tab_synthaxe);
  early_space(str);
  while (tab_synthaxe[i] != NULL)
    {
      if (strncmp(str, tab_synthaxe[i], strlen(tab_synthaxe[i])) == 0)
	{
	  alright = 1;
	  printf("Déclaration de la variable %s de type %s\n", get_name(str), get_types(str,tab_synthaxe));
	  break ;
	}
      i++;
    }
  if (alright == 0)
    return (fprintf(stderr, "%s n'est pas un type valide \n", str));
  return (check_integrity(str, strlen(tab_synthaxe[i])));
}

int	check_integrity(char *str, int types)
{
  int	i;

  i = types;
  if (str[i] != ' ')
    return (fprintf(stderr, "%s n'est pas un type valide \n", str));
  while ((str[i] == ' ') && (str[i] != ';') && (str[i]))
    i++;
  if (str[i] == ';' || !str[i])
    return (fprintf(stderr, "Un identifiant est attentdu\n"));
  while (str[i] != ';' && str[i])
    i++;
  manage_types(str);
  if (str[i] != ';' || (str[i + 1]))
    return (fprintf(stderr, "Ce n'est pas la bonne synthaxe\n"));
  return (0);
}
