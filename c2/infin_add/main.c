#include	<stdlib.h>

int		my_strlen(char *str)
{
  int		i = 0;

  while (str[i])
    i++;
  return i;
}

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		init(char *tab, int len)
{
  int		ind = 0;

  while (ind <= len)
    {
      tab[ind] = 0;
      ind++;
    }
}

char		*is_bigger(char *a, char *b)
{
  char		*big = a;
  int		i = 0;

  if (my_strlen(a) < my_strlen(b))
    big = b;
  if (my_strlen(a) == my_strlen(b))
    {
      while ((a[i] == b[i]) && (a[i] != 0))
        i++;
      big = ((a[i] < b[i]) ? b : a);
      if (a[i] == b[i])
        {
          my_putstr("0\n");
          exit(2);
        }
    }
  return (big);
}

void		add_end(char *res, int i)
{
  char		*end = res + i + 1;

  my_putstr(end);
  free(res);
}

void		my_add_inf(char *a, char *b, int ia, int ib)
{
  int		i = ((ia > ib) ? ia : ib) + 1;
  char		*res = malloc((i)* sizeof (*res));

  init(res, i);
  while((ia >= 0) && (ib >= 0))
    {
      res[i - 1] = (a[ia] + b[ib] + res[i] - 2 * '0') / 10;
      res[i] = (a[ia--] + b[ib--] + res[i] - 2 * '0') % 10 + '0';
      i--;
    }
  while ((ib >= 0) && (ia < 0))
    {
      res[i] = (b[ib] + res[i] - '0') % 10 + '0';
      res[--i] = (b[ib--] - 48) / 10;
    }
  while ((ia >= 0) && (ib < 0))
    {
      res[i] = (a[ia] + res[i] - '0') % 10 + '0';
      res[--i] = (a[ia--] - 48) / 10;
    }
  if ((ia == ib) && (res[i] != 0))
    res[i--] += 48;
  add_end(res, i);
}

void		my_sub(char *a, char *b, int ia, int ib)
{
  int		i = ((ia > ib) ? ia : ib) + 1;
  char		*res = malloc((i)* sizeof (*res));
  char		*end;

  init(res, i);
  while (ib >= 0)
    {
      res[i - 1] = ((a[ia] - res[i] >= b[ib]) ? 0 : 1);
      res[i] = ((a[ia--] - b[ib--] - res[i]) + 10) % 10 + '0';
      i--;
    }
  while (ia >= 0)
    {
      res[i] = ((a[ia--] - res[i] - '0') + 10) % 10 + '0';
      i--;
    }
  end = res + i + 1;
  while (*end == '0')
    end++;
  my_putstr(end);
  free(res);
}

void		my_sub_inf(char *a, char *b, int signe_a)
{
  char		*bigger = is_bigger(a, b);

  if (bigger == a)
    {
      if (signe_a == -1)
	my_putchar('-');
      my_sub(a, b, my_strlen(a) - 1, my_strlen(b) - 1);
    }
  if (bigger == b)
    {
      if (signe_a == 1)
        my_putchar('-');
      my_sub(b, a, my_strlen(b) - 1, my_strlen(a) - 1);
    }
}

void		do_add(char *a, char *b)
{
  int		signe_a = 1;
  int		signe_b = 1;

  while((*a == '+') || (*a == '-'))
    {
      if (*a == '-')
	signe_a *= -1;
      a++;
    }
  while((*b == '+') || (*b == '-'))
    {
      if (*b == '-')
        signe_b *= -1;
      b++;
    }
  if (signe_a == signe_b)
    {
      if (signe_a == -1)
	my_putchar('-');
      my_add_inf(a, b, my_strlen(a) - 1, my_strlen(b) - 1);
    }
  else
    my_sub_inf(a, b, signe_a);
}

int		main(int argc, char **argv)
{
  if (argc == 2)
    my_putstr(argv[1]);
  if (argc > 2)
    do_add(argv[1], argv[2]);
  my_putchar(10);
  return (0);
}
