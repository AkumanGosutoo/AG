/*
** dup2.c for dupp in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue May 12 12:23:36 2015 sirininh soumpholphakdy
** Last update Tue May 12 12:43:45 2015 sirininh soumpholphakdy
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
  int	pipefd[2];
  int	error;
  int	pid;
  char	buff[512];
  int	len;

  error = pipe(pipefd);
  if (error == -1)
    {
      write(2, "error on pipe\n", strlen("error on pipe\n"));
      exit(EXIT_FAILURE);
    }
  if ((pid = fork()) == -1)
    {
      write(2, "error on fork\n", strlen("error on fork\n"));
      exit(EXIT_FAILURE);
    }
  if (pid == 0)
    {
      close(pipefd[0]);
      error = dup2(pipefd[1], 1);
      if (error == -1)
	{
	  write(2, "error on dup2\n", strlen("error on dup2\n"));
	  exit(EXIT_FAILURE);
	}
      execlp("/bin/ls", "ls", 0);
    }
  else
    {
      close(pipefd[1]);
      error = dup2(pipefd[0], 0);
      if (error == -1)
	{
	  write(2, "error on dup2\n", strlen("error on dup2\n"));
	  exit(EXIT_FAILURE);
	}
      execlp("/bin/grep", "grep", "toto", 0);
    }
  return (EXIT_SUCCESS);
}
