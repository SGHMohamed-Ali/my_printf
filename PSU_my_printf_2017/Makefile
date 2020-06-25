##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make re pour les intimes
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
		@tput setaf 4
		@echo "Compilation terminée !"
		@tput sgr0
superclean:
		@tput setaf 1
		@echo "Nettoyage en cours, veuillez patienter.."
		@tput sgr0
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
		@tput setaf 2
		@echo "Le nettoyage est une réussite !"
		@tput sgr0

clean:
		@rm -f $(OBJ)

fclean:	clean	superclean
		@rm -f $(NAME)

re:	fclean	all
