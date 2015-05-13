/*
** Translator.c for FDP in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Nov  3 14:54:12 2014 sirininh soumpholphakdy
** Last update Thu Nov  6 15:16:37 2014 sirininh soumpholphakdy
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  char	c;

  c = 0;
  while (str[c] != '\0')
    {
      my_putchar(str[c]);
      c++;
    }
}

int	main(int argc, char **argv)
{
  int	i;

  i = 1;
  while (i++ < argc)
    {
      my_putstr(argv[i - 1]);
      my_putchar('\n');
    }
}
