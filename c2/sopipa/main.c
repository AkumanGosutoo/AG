#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	die(const char *s)
{
  write(2, s, strlen(s));
  exit(1);
}

int	main(int ac, char **av)
{
  if (ac == 5)
    {
      int	fd[2];
      int	fd_in;
      int	fd_out;
      int	status;
      char	*sh[] = {"/bin/sh", "-c", NULL, NULL };

      if ((fd_in = open(av[1], O_RDONLY)) == -1)
	die("first open failed\n");
      if ((fd_out = open(av[4], O_WRONLY | O_TRUNC | O_CREAT, 0666)) == -1)
	die("second open failed\n");

      if (pipe(fd) == -1)
	die("pipe failed");


      if (!fork())
	{
	  close(fd[0]);
	  if (dup2(fd_in, 0) == -1)
	    die("third dup2 failed\n");
	  if (dup2(fd[1], 1) == -1)
	    die("pipe failed\n");
	  sh[2] = av[2];
	  execv(sh[0], sh);
	}


      if (!fork())
	{
	  close(fd[1]);
	  if (dup2(fd_out, 1) == -1)
	    die("fourth dup2 failed\n");
	  if (dup2(fd[0], 0) == -1)
	    die("pipe failed\n");
	  sh[2] = av[3];
	  execv(sh[0], sh);
	}
      close(fd[0]);
      close(fd[1]);

      wait(&status);
      wait(&status);
    }

  return (0);
}
