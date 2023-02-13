##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    =	main.c	\
			option1.c 	\
			option_two.c 	\

OBJ    =    $(SRC:.c=.o)

NAME	=	106bombyx

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm

clean:
		rm $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all
