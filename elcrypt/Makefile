##
## Makefile for Makefile in /home/soumph_s/elcrypt
## 
## Made by sirininh soumpholphakdy
## Login   <soumph_s@epitech.net>
## 
## Started on  Sat Feb 28 11:42:28 2015 sirininh soumpholphakdy
## Last update Sat Feb 28 13:21:35 2015 sirininh soumpholphakdy
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -W -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I. -g3

NAME	= elcrypt

SRCS	=

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
