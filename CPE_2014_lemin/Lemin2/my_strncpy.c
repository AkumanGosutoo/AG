/*
** my_strncpy.c for  in /home/chopar_a/rendu/CPE_2014_lemin
**
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
**
** Started on  Wed Apr 22 13:27:33 2015 adrien chopard
** Last update Tue Apr 28 12:57:27 2015 adrien chopard
*/

char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;
  int   x;

  i = 0;
  x = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (src[x] != 0)
    x = x + 1;
  if (n > x)
    dest[i] = '\0';
  return (dest);
}
