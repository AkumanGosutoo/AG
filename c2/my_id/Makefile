NAME 	= my_id

SRC	= main.c

OBJ	= $(SRC:.c=.o)

CC	= gcc

RM	= rm -rf

CFLAGS	= -W -Wall

all 	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re