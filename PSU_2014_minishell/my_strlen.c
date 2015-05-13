/*
** my_strlen.c for my_strlen in /home/houtin_r/
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Fri Mar 15 20:30:46 2013 raphael houtin
** Last update Wed May 15 16:58:40 2013 raphael houtin
*/

int	my_strlen(char *str)
{
  int	c;

  c = 0;

  while (str[c] != '\0')
    c++;
  return (c);
}
