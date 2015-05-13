/*
** mini2.c for mnin in /home/soumph_s
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Tue Nov 11 10:17:33 2014 sirininh soumpholphakdy
** Last update Tue Nov 11 10:28:29 2014 sirininh soumpholphakdy
*/

#include <mlx.h>

void *mlx_init();

void *mlx_new_window(void *mlx_ptr, int width, int height, char *title);

int mlx_pixel_put(void *mlx_ptr, void *win_ptr, int x, int y, int color);



int	main()
{
  void *mlx_ptr;
  void *win_ptr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr,500,500,"test1");
  mlx_expose_hook(win_ptr,gere_expose,&my_var);
  mlx_key_hook(win_ptr,gere_key,&my_var);
  mlx_loop(mlx_ptr);
}
