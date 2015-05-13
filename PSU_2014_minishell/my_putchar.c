/*
** my_putchar.c for mysh in /home/houtin_r//svn/system_unix/minishell1-2017pso-houtin_r/functions
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Fri Jun  7 12:29:49 2013 raphael houtin
** Last update Fri Jun  7 12:30:12 2013 raphael houtin
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
