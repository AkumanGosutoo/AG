/*
** rt1.c for rt1 in /home/soumph_s/TPRAY
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Feb  3 13:53:54 2015 sirininh soumpholphakdy
** Last update Tue Feb  3 15:04:19 2015 sirininh soumpholphakdy
*/

#include <mlx.h>

void	*mlx_init();

void	*mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);

void	*mlx_new_image(void *mlx_ptr, int width, int height);

int	main()
{
  void	*mlx_ptr;
  void	*img_ptr;
  void	*win_ptr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 400, 400, "test");
  img_ptr = mlx_new_image(mlx_ptr, 400, 400);

  while(42);
}
