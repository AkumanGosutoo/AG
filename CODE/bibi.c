/*
** bibi.c for bibi in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Mon Dec 15 16:28:22 2014 sirininh soumpholphakdy
** Last update Thu Dec 18 16:53:18 2014 sirininh soumpholphakdy
*/

#include <mlx.h>

void	*mlx_init();

void	*mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);

void	*mlx_new_image(void *mlx_ptr, int width, int height);

int	mlx_put_image_to_window(void *mlx_ptr, void *win_ptr, void *img_ptr, int x, int y);

char	*mlx_get_data_addr(void *img_ptr, int *bits_per_pixel, int *size_line, int *endian);

int	mlx_string_put(void *mlx_ptr, void *win_ptr, int x, int y, int color, char *string);

int	main()
{
  void	*mlx_ptr;
  void	*img_ptr;
  void	*win_ptr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "test");
  img_ptr = mlx_new_image(mlx_ptr, 200, 200);
  mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, 200, 200);
  mlx_string_put(mlx_ptr, win_ptr, 200, 200, 0xFFFFFF, "wolf");

  while (42);
}
