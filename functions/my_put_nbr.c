/*
** my_put_nbr.c for my_put_nbr in /home/soumph_s/functions
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sat Oct 11 09:58:16 2014 sirininh soumpholphakdy
** Last update Sat Oct 11 10:14:08 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_put_nbr(int nb)
{
  int	i;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb* (-1);
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  i = (nb % 10);
	  nb = (nb - i) / 10;
	  my_put_nbr(nb);
	  my_putchar(1 + i);
	}
      else
	my_putchar(1 + nb % 10);
    }
}

int	main()
{
  my_put_nbr(10);
}
