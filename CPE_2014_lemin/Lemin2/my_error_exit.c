/*
** error.c for  in /home/chopar_a/rendu/CPE_2014_lemin
**
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
**
** Started on  Wed Apr 22 13:40:26 2015 adrien chopard
** Last update Wed Apr 22 13:56:57 2015 adrien chopard
*/

#include "my_error_exit.h"

void    my_error_exit(char *err)
{
  my_puterr(err);
  exit(EXIT_FAILURE);
}
