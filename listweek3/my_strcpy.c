/*
** my_strcpy.c for strcpy in /home/soumph_s/listweek3
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Oct 24 12:40:05 2014 sirininh soumpholphakdy
** Last update Thu Oct 30 20:38:06 2014 sirininh soumpholphakdy
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a])
    {
      dest[a] = src[a];
      a++;
    }
  dest[a] = '\0';
  return (dest);
}
