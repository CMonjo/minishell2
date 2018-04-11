##
## EPITECH PROJECT, 2018
## makefile
## File description:
## lib maker :o
##

CC	= gcc

CFLAGS	=	-Wall -Wextra -W -I ../../include/

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME =	liblist.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
