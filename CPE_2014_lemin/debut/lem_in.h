/*
** lem_in.h for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Fri Apr 17 15:40:13 2015 adrien chopard
** Last update Fri Apr 24 11:53:07 2015 adrien chopard
*/

#ifndef SERVER_H_
# define SERVER_H_

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_puterr(char *str);
int	my_putnbr(int nb);
int	error_fd(int fd);
int	parsing_nbr_fourmis(char *buffer);
int	parsing_salle(char *buffer);

#endif /* !SERVER_H_ */
