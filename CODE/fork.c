/*
** fork.c for fork in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Feb  2 15:16:22 2015 sirininh soumpholphakdy
** Last update Mon Feb  2 15:30:35 2015 sirininh soumpholphakdy
*/

#include <unistd.h>
#include <stdio.h>

int	main()
{
  pid_t		pid;

  if ((pid = fork()) == -1)
    {
      fprintf(stderr, "[ERREUR]: problème du fork\n");
      return (1);
    }
  if (pid == 0)
    printf("Je suis le fils\n");
  else
    printf("Je suis le père, le pid de mon fils est: %d\n", pid);
  return (0);
}
