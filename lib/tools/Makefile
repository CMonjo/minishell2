##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Library my
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -I ../../include/

SRC	=	my_strlen.c		\
		my_putchar.c		\
		my_getnbr.c		\
		my_strcpy.c		\
		my_str_isnum.c		\
		my_strcmp.c		\
		my_putstr.c		\
		my_str_to_word_array.c	\
		my_calloc.c		\
		my_count_char.c		\
		my_printf.c		\
		my_streqstr.c		\
		my_put_nbr.c		\
		my_strcat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libtools.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
