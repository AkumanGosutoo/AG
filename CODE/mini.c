/*
** mini.c for mnin in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Nov 10 10:26:54 2014 sirininh soumpholphakdy
** Last update Wed Nov 26 14:51:34 2014 sirininh soumpholphakdy
*/

#include <mlx.h>

void	*mlx_init();

void	*mlx_new_window(void *mlx_ptr, int width, int height, char *title);

int	mlx_pixel_put(void *mlx_ptr, void *win_ptr, int x, int y, int color);

int	main()
{
  void *mlx_ptr;
  void *win_ptr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr,500,500,"test");
  mlx_pixel_put(mlx_ptr,win_ptr,25,25,0xFFFFFF);
  mlx_pixel_put(mlx_ptr,win_ptr,250,250,0xFFFFFF);

  while (42);
}
