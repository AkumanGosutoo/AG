/*
** my_get_next_line.h for  in /home/chopar_a/rendu/CPE_2014_lemin/Lemin2
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Tue Apr 28 12:59:41 2015 adrien chopard
** Last update Tue Apr 28 13:03:07 2015 adrien chopard
*/

#ifndef MY_GET_NEXT_LINE_H_
# define MY_GET_NEXT_LINE_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE             4096
# define ERR_MALLOC_GNL		"GetNextLine error: malloc failed !"
#  define ERR_CTRLD		"CTRL-D received, the program will be closed!\n"
#   define ERR_GNL_FD		"GetNextLine error: can't read this fd.\n"
#    define ERR_WRITE		"Write error.\n"

int	my_len(char *str, int x);
char	*my_cpy(char *dest, char *src, int i);
char	*my_zerofd();
char	*my_gnl(char *buffer);
char	*get_next_line(int fd);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strcpy(char *dest, char *src);

#endif /*  !MY_GET_NEXT_LINE_H_ */
