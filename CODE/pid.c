/*
** pid.c for pid in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Feb  2 15:26:55 2015 sirininh soumpholphakdy
** Last update Mon Feb  2 15:29:39 2015 sirininh soumpholphakdy
*/

#include <unistd.h>
#include <stdio.h>

int	main()
{
  pid_t		pid;

  pid = getppid();
  printf("le pid de mon pere est: %d\n", pid);
  return (0);
}
