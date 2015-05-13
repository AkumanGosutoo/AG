/*
** my_display.h for  in /home/chopar_a/rendu/CPE_2014_lemin/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Tue Apr 28 13:10:43 2015 adrien chopard
** Last update Tue Apr 28 13:10:46 2015 adrien chopard
*/

#ifndef MY_DISPLAY_H_INCLUDED
#define MY_DISPLAY_H_INCLUDED

#include <unistd.h>

#include "my_error_exit.h"

void	my_putchar(char c);
void	my_putstr(char *str);
int     my_strlen(char *str);
int     my_puterr(char *str);
int     my_putnbr(int nb);

#endif /* !MY_DISPLAY_H_ */
