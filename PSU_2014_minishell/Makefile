##
## Makefile for minishell1 in /home/houtin_r//svn/system_unix/minishell1-2017pso-houtin_r
## 
## Made by raphael houtin
## Login   <houtin_r@epitech.net>
## 
## Started on  Wed Jun  5 16:05:31 2013 raphael houtin
## Last update Sun Jun  9 21:48:58 2013 raphael houtin
##
NAME =		mysh 

RM =		rm -f

CC =		gcc 

SRCS =		my_putstr.c \
		my_putchar.c \
		my_str_to_wordtab.c \
		my_show_wordtab.c \
		my_strdup.c \
		my_strlen.c \
		my_strncmp.c \
		my_put_nbr.c \
		minishell.c \


OBJS =		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re