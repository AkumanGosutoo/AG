/*
** structures.c for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Wed Apr 22 12:44:35 2015 adrien chopard
** Last update Fri Apr 24 12:36:10 2015 adrien chopard
*/

#include "lem_in.h"

struct t_salle_0 creation_de_la_salle_de_depart
{
  char	*name;
  int	x;
  int	y;

  int	nombre_de_fourmis;
  nombre_de_fourmis = parsing_nbr_fourmis;
};

struct t_salle_1 creation_de_salle_intermediaire 
{
  char	*name;
  int	x;
  int	y;

  int	nombre_de_fourmis; // 1 max
};

struct t_salle_2 creation_de_la_salle_de_sortie
{
  char	*name;
  int	x;
  int	y;

  int	nombre_de_fourmis; // infini
  nombre_de_fourmis = parsing_nbr_fourmis;
};
