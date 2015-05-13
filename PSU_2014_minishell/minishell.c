/*
** minishell.c for minishell.c in /home/houtin_r//svn/system_unix/minishell1-2017pso-houtin_r
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Wed Jun  5 13:37:45 2013 sirininh soumpholphakdy
** Last update Wed Jan 21 17:24:40 2015 sirininh soumpholphakdy
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void	prompt()
{
  char	*buffer[4096];

  my_putstr("$-->");
  if (read(0, buffer, 4096) <= 0)
    {
      my_putstr("[ERREUR]");
    }
  my_putstr(buffer);
  buffer[0] = '\0';
}

char	*var_env(char **env)
{
  int	var;

  var = 0;
  while (env[var][0] != 'P')
    {
      env++;
      if(env[var][1] != 'A')
	env++;
      if(env[var][2] != 'T')
	env++;
      if(env[var][3] != 'H')
	env++;
      if(env[var][4] != '=')
	env++;
    }
  my_putstr(env[var]);
  my_putchar('\n');
  return (env[var]);
}


int	main(int ac, char **av, char **env)
{
  char	*buffer;
  int	i;

  while (42)
    {
      prompt();
      var_env(env);
    }
}

/* .affiche un prompt */
/* .lire la commande */
/* ...allouer une zone memoire */
/* ...verifier */
/* ...read*/
/* .execute la commande */
