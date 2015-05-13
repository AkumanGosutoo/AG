/*
** my_strncmp.c for my_strncmp in /home/houtin_r//afs/rendu/lib/my
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Tue Apr  2 11:22:59 2013 raphael houtin
** Last update Sat Jun  8 14:01:29 2013 raphael houtin
*/

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && i < nb)
    if (s1[i] < s2[i])
      return (-1);
    else if (s1[i] > s2[i])
      return (1);
  return (0);
}
