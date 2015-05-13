void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		print_number(int nb)
{
  int tmp = nb;
  int div = 1;

  while (tmp >= 10)
    {
      tmp /= 10;
      div *= 10;
    }
  while (div != 0)
    {
      my_putchar(((nb / div) % 10) + '0');
      div /= 10;
    }
}

int main(int ac, char **av)
{
  if (ac == 1)
    {
      my_putchar('\n');
      return 0;
    }
  else if (ac == 2)
    {
      print_number(0);
      my_putchar('\n');
      return 0;
    }
  else
    {
      int a = 0;
      int c = 0;
      int ct = 0;

      while (av[1][c] != 0)
	{
	  a = 0;
	  while (av[2][a] != 0)
	    {
	      if (av[1][c] == av[2][a])
		++ct;
	      ++a;
	    }
	  ++c;
	}
      print_number(ct);
      my_putchar('\n');
    }
}
