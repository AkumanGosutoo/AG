/*
** fuckimg.c for fuck in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Wed Dec 17 17:49:06 2014 sirininh soumpholphakdy
** Last update Wed Dec 17 18:01:13 2014 sirininh soumpholphakdy
*/

#include <mlx.h>

void	*mlx_init();

void	*mlx_new_image(void *mlx_ptr, int width, int height);

char	*mlx_get_data_addr(void *img_ptr, int *bits_per_pixel, int *size_line, int *endian);

int	main()
{
  void	mlx_ptr;
  void	img_ptr;
  char	img;
  char	data;
  int	bpp;
  int	sizeline;
  int	endian;

  mlx_ptr = mlx_init();
  img_ptr = mlx_new_image(mlx_ptr, 300, 300);
  img_ptr =  mlx_get_data_addr(img, &bpp, &sizeline, &endian);
