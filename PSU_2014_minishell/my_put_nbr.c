/*
** my_put_nbr.c for my_put_nbr.c in /home/houtin_r/
** 
** Made by raphael houtin
** Login   <houtin_r@epitech.net>
** 
** Started on  Thu Mar 14 18:33:23 2013 raphael houtin
** Last update Mon Mar 18 21:44:21 2013 raphael houtin
*/

void	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    {
      write(1, "-2147483648", 11);
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	} 
      if (nb >= 0 && nb <= 9 )
	{
	  my_putchar(nb + '0');
	}
      if (nb > 9)
	{
	  my_put_nbr(nb / 10);
	  my_putchar(nb % 10 + '0');
	}
    }
}
