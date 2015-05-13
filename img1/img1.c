/*
** img1.c for img1 in /home/soumph_s/img1
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Nov 25 13:58:45 2014 sirininh soumpholphakdy
** Last update Wed Nov 26 15:45:07 2014 sirininh soumpholphakdy
*/

#include <mlx.h>

void *mlx_init();

void *mlx_new_image(void *mlx_ptr, int width, int height);

char *mlx_get_data_addr(void *img_ptr, int *bits_per_level, int *size_line, int *endian);

int	main()
{
  void *mlx_ptr;
  void *img_ptr;

  mlx_new_image(mlx, 300, 300);
  mlx_get_data_addr(30, 30, 30);
}
