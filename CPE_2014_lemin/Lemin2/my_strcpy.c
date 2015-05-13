/*
** my_strcpy.c for  in /home/chopar_a/rendu/CPE_2014_lemin/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Tue Apr 28 12:57:15 2015 adrien chopard
** Last update Tue Apr 28 12:57:17 2015 adrien chopard
*/

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != 0)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
