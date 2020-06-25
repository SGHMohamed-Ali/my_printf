##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make re 
##

SRC	=	flags/flags.c		\
		flags/flags_two.c	\
		flags/flags_three.c	\
		check/my_printf.c	\
		print/printers.c	\
		print/printnb.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
superclean:
		@rm -f *~
		@rm -f *#
		@rm -f second/*~
		@rm -f second/*#
		@rm -f src/*~
		@rm -f src/*#
		@rm -f $(NAME)
		@rm -f include/*~
		@rm -f include/*#
		@rm -f flags/*#
		@rm -f flags/*~
		@rm -f check/*~
		@rm -f check/*#
		@rm -f print/*~
		@rm -f print/*#
clean:
		@rm -f $(OBJ)

fclean:	clean	superclean
		@rm -f $(NAME)

re:	fclean	all
