/*
** teeest.c for teeest in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sat Oct  4 20:36:13 2014 sirininh soumpholphakdy
** Last update Sat Oct  4 20:41:05 2014 sirininh soumpholphakdy
*/

int	ABBA(int x)
{
  int	l;

  l = 1;
  if (1 == x)
    {
      my_putchar('B');
      my_putchar('\n');
    }
  else
    {
      my_putchar('A');
      l = 2;
      while (1 != x)
	{
	  my_putchar('B');
	  l++;
	}
      my_putchar('A');
      my_putchar('\n');
    }
}
