##
## EPITECH PROJECT, 2017
## Project =pname=
## File description:
## Build =pname= binary.
##

CC	=	gcc

CFLAGS	=	-Wextra -W -Wall -I ./include/

LIB	=	-L lib/tools/ -ltools -L lib/list -llist

SRC	=	src/env_handling.c	\
		src/check_input.c	\
		src/builtin.c		\
		src/cd_builtin.c	\
		src/parsing_tools.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib/tools/
	make -C ./lib/list/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C ./lib/tools/
	make clean -C ./lib/list/

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/tools/
	make fclean -C ./lib/list/

re: fclean all
