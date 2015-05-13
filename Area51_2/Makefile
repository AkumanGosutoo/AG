##
## Makefile for Makefile_for_Rush in /home/lahmar.k/Projet_Tek1_semestre1/Area51
## 
## Made by kamel lahmar
## Login   <lahmar_k@epitech.net>
## 
## Started on  Fri Jan  2 20:24:16 2015 kamel lahmar
## Last update Sat Jan  3 15:10:40 2015 kamel lahmar
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -W -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I. -g3

LDFLAGS	=

NAME	= marvin

SRCS	= manage_error.c \
	main.c \
	synthaxe_error.c \
	manage_types.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
