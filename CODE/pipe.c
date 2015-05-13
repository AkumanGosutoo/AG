/*
** pipe.c for pipe in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Feb 23 12:23:39 2015 sirininh soumpholphakdy
** Last update Mon Feb 23 12:49:07 2015 sirininh soumpholphakdy
*/

#include <unistd.h>
#include <stdlib.h>

int	main()
{
  int	pipefd[2];
  int	erreur;
  int	pid;
  int	phrase;
  char	buff[512];

  erreur = pipe(pipefd);
  if (erreur == -1)
