/*
** test.c for test colle 03 in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Sat Oct  4 14:20:39 2014 sirininh soumpholphakdy
** Last update Sat Oct  4 17:23:58 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write (1 ,&c , 1);
}

int	my_put_abcde()
{
  my_putchar('a');
  my_putchar('b');
  my_putchar('c');
  my_putchar('d');
  my_putchar('e');
  my_putchar('\n');
}

int	fn(int n)
{
  if (n > 5)
    return (0);
  my_put_B();
  n = n + 1;
  fn(n);
  my_putchar('B');
}

int	main()
{
  fn(0);
  return (0);
}
