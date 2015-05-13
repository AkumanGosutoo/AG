/*
** parsing.c for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Wed Apr 22 14:31:32 2015 adrien chopard
** Last update Fri Apr 24 17:05:11 2015 adrien chopard
*/

#include "lem_in.h"
#include <stdlib.h>

int	parsing_nbr_fourmis(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[1] >= '0' && buffer[1] <= '9' && buffer[2] == '\n')
	atoi(buffer[1]); // c'est la ligne ou est donné le nombre de fourmis !
    }
}

int	parsing_salle(char *buffer)
{
  int	i;
  struct t_salle_0 creation_de_la_salle_de_depart;
  struct t_salle_1 creation_de_salle_intermediaire;
  struct t_salle_2 creation_de_la_salle_de_sortie;
  
  i = 0;
  if (buffer[1] == "#")
    {
      if (buffer[i] == "##start")
	{
	  i = i + 1;
	  buffer[i] = struct t_salle_0;  // la prochaine ligne sera alors la salle de départ, et il faut l'envoyer a la structure concerné.
	}
      else if (buffer[i] == "##end")
	{
	  i = i + 1;
	  buffer[i + 1] = struct t_salle_2; // la prochaine ligne sera alors la salle d'arrivéé.
	}
      else
	return (NULL); // ne rien faire, puisque c'est un commentaire.
    }
  else if (buffer[i - 2] == "##end")
    // il s'agit de la première salle intermédiaire
}
