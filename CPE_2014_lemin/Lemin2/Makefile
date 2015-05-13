##
## Makefile for  in /home/chopar_a/Lemin2
## 
## Made by adrien chopard
## Login   <chopar_a@epitech.net>
## 
## Started on  Mon Apr 27 13:26:47 2015 adrien chopard
## Last update Wed Apr 29 13:36:33 2015 adrien chopard
##

C 	= gcc

RM 	= rm -f

NAME    = lem_in

SRCS    = main.c \
	  config_loader.c \
	  config_display.c \
	  analyse_line.c \
	  create_room.c \
	  utils_malloc.c \
          my_get_next_line.c \
          my_display.c \
          my_strcpy.c \
          my_strncpy.c \
          my_error_exit.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME) $(NAME2)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re: fclean all

