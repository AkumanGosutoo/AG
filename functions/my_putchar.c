/*
** my_putchar.c for my_putchar in /home/soumph_s/functions
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sat Oct 11 09:45:12 2014 sirininh soumpholphakdy
** Last update Sat Oct 11 09:46:31 2014 sirininh soumpholphakdy
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  my_putchar('k');
}
