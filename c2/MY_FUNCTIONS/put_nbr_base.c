void	my_put_nbr_base(int nb, char *base)
{
  if (nb > strlen(base))
    my_put_nbr_base(nb / strlen(base), base);
  write(1, &base[nb % strlen(base)], 1);
}
