##
## Makefile for  in /home/chopar_a/rendu/CPE_2014_lemin
## 
## Made by adrien chopard
## Login   <chopar_a@epitech.net>
## 
## Started on  Fri Apr 17 15:19:11 2015 adrien chopard
## Last update Mon Apr 27 15:13:13 2015 adrien chopard
##

CC = gcc

RM = rm -f

CFLAGS	+= -Wextra 
CFLAGS	+= -pedantic
CFLAGS	+= -I.

NAME	= lem_in

SRCS	= lem_in.c \
	  main.c \
	  get_next_line.c \
	  my_display.c \
	  my_strcpy.c \
	  my_strncpy.c \
	  my_error_exit.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(NAME2)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re: fclean all
