/*
** get_next_line.h for  in /home/chopar_a/rendu/CPE_2014_lemin
** 
** Made by adrien chopard
** Login   <chopar_a@epitech.net>
** 
** Started on  Mon Apr 20 17:27:43 2015 adrien chopard
** Last update Fri Apr 24 11:59:19 2015 adrien chopard
*/

#ifndef __GET_NEXT_LINE_H__
#define __GET_NEXT_LINE_H__

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

#endif /* __GET_NEXT_LINE_H__ */
