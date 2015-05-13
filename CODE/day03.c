/*
** day03.c for day03 in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Wed Oct  1 09:55:05 2014 sirininh soumpholphakdy
** Last update Wed Oct  1 10:15:24 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}
int	main()
{
  char  c;

  c = 'a';
  my_putchar(c);
  my_putchar('z');
  my_putchar(65);
}
