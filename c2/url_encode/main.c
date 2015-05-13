#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	my_strlen(char *str)
{
  int	i = 0;
  while (str[i])
    i++;
  return i;
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_put_nbr_base(int nb, char *base)
{
  if (nb > (int)strlen(base))
    my_put_nbr_base(nb / strlen(base), base);
  write(1, &base[nb % strlen(base)], 1);
}

int	in_hexa_or_not(char c)
{
  char	specific[] = "$-_.+!*'(),";
  int	i = 0;

  while (specific[i])
    {
      if (specific[i] == c)
	return 0;
      i++;
    }
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    return 0;
  return 1;
}

void	url_encode(char *str)
{
  int	i = 0;

  while (str[i])
    {
      if (!in_hexa_or_not(str[i]))
	write(1, &str[i], 1);
      else if (str[i] == ' ')
	write(1, "+", 1);
      else
	{
	  write(1, "%", 1);
	  my_put_nbr_base(str[i], "0123456789ABCDEF");
	}
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 2)
    {
      my_putstr("\n");
      return 1;
    }
  url_encode(av[1]);
  my_putstr("\n");
  return (0);
}

