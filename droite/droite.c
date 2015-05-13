/*
** droite.c for droite in /home/soumph_s/droite
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Nov 17 15:45:51 2014 sirininh soumpholphakdy
** Last update Mon Nov 17 15:59:01 2014 sirininh soumpholphakdy
*/

int	draw_cas_un(int xl, int yl, int x2, int y2)
{
  int	x;

  x = xl;
  while (x<=x2)
    {
      mlx_pixel_put(
