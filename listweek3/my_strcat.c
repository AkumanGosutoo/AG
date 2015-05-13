/*
** my_strcat.c for strcat in /home/soumph_s/listweek3
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Oct 24 10:11:43 2014 sirininh soumpholphakdy
** Last update Fri Oct 24 10:13:58 2014 sirininh soumpholphakdy
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}
