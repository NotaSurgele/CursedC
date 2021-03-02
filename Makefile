##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CC  =	gcc

SRC =		$(wildcard src/string/*.c)	\
		main.c

SRC_UT	=

SRC_TEST	=

OBJ	=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include

NAME	=	CCURSED

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include

CFLAGS_UT	=	-lcriterion --coverage

RM	=	rm -rf

all:		$(NAME)

$(NAME):    $(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

tests_run:	$(OBJ) $(OBJ_UT)
			gcc -o $(NAME_UT) $(SRC_TEST) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT)
			./$(NAME_UT)
			gcovr -b --exclude tests/
clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)
		$(RM) $(NAME_UT)
		$(RM) tests/*.o
		$(RM) *.gc*

fclean_ut:	clean
		$(RM) $(NAME_UT)
		$(RM) $(NAME)

re:		fclean all
