/*
** qad.c for qad in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Dec  5 13:44:27 2014 sirininh soumpholphakdy
** Last update Sat Jan  3 14:24:42 2015 sirininh soumpholphakdy
*/

#include <mlx.h>

void	*mlx_init();

void	*mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);

int	mlx_pixel_put(void *mlx_ptr, void *win_ptr, int x, int y, int color);

int	main()
{
  void *mlx_ptr;
  void *win_ptr;
  int	x;
  int	y;
  int	a;
  int	b;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "test");
  x = 100;
  y = 100;
  a = 100;
  b = 100;

  while (x <= 900 && y <= 900)
    {
      if (x == 900)
	{
	  x = 100;
	  y = y + 50;
	}
      x++;
      mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xF00000);
    }
  while (a <= 900 && b <= 900)
    {
      if (b == 900)
	{
	  b = 100;
	  a = a + 50;
	}
      b++;
      mlx_pixel_put(mlx_ptr, win_ptr, a, b, 0x00000F);
    }
  while (42);
}
