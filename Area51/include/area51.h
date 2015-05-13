/*
** my.h for my.h in /home/lahmar.k/Projet_Tek1_semestre1/Area51/include
** 
** Made by kamel lahmar
** Login   <lahmar_k@epitech.net>
** 
** Started on  Fri Jan  2 23:40:54 2015 kamel lahmar
** Last update Sat Jan  3 16:02:57 2015 kamel lahmar
*/

#ifndef AREA51_H_
# define AREA51_H_
# define NB_TYPES

int	synthaxe_error(char *str);
void	init_types(char *(types_tab[NB_TYPES]));
int	manage_error(int argc, char **argv);
void	early_space(char *str);
int	synthaxe_error(char *str);
int	check_integrity(char *str, int types);
int	manage_types(char *str);
char	*get_types(char *str, char *tab_synthaxe[20]);
char	*get_name(char *str);

#endif /* !AREA51_H_ */ 
