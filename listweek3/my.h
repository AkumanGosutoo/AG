/*
** my.h for  in /home/soumph_s/listweek3
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Oct 24 10:28:47 2014 sirininh soumpholphakdy
** Last update Fri Oct 24 10:29:41 2014 sirininh soumpholphakdy
*/
/*
** my.h for myh in /home/soumph_s/listweek3
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Fri Oct 24 10:27:42 2014 sirininh soumpholphakdy
** Last update Fri Oct 24 10:27:42 2014 sirininh soumpholphakdy
*/

#ifndef __MY_H__
#define __MY_H__

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <termios.h>

char *my_strdup(char *str);
void my_putchar(char c);
int my_isneg(int nb);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr(char *s);
int my_strlen(char *str);
int my_getnbr(char *str);
int my_power_rec(int nb, int power);
int my_square_root(int nb);
int my_is_prime(int nombre);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int nb);
char *my_revstr(char *str);
char *my_strstr(char *str, char *to_find);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
int my_showstr(char *str);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char *src, int nb);
int my_strlcat(char *dest, char *src, int size);
char **my_str_to_wordtab(char *str);
int my_putnbr_base(int nbr, char *base);
int my_getnbr_base(char *str, char *base);
char *convert_base(char *nbr, char *base_from, char *base_to);
void xfree(void *data);
void *xmalloc(int size);
int xwrite(int fd, void *buf, int nbyte);
int xread(int fd, char *buf, int size);
int xtcgetattr(int fd, struct termios *termios_p);
int xtcsetattr(int fd, int optional_actions, struct termios *termios_p);
int xtgetent(char *bp, char *name);
int xtputs(char *str, int affcnt, int (*putc)(int));
char *xtgetstr(char *id, char **area);
char *xtparm(char *value);
int xopen(char *file, int flags);
int xwait(int *stat_loc);
int xpipe(int fildes[2]);
int xdup2(int fildes, int fildes2);
int xclose(int fildes);



#define BUF_LEN (2)
#define LINE_LEN (1024)

#endif /*__MY_H__*/

