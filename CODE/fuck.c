/*
** fuck.c for maff in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Wed Apr  1 11:41:48 2015 sirininh soumpholphakdy
** Last update Wed Apr  1 11:50:17 2015 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  int	a;

  a = 65;
  while (a != 91) 
    {
      my_putchar(a);
      a++;
    } 
}
