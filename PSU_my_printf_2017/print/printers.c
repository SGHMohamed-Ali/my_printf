/*
** EPITECH PROJECT, 2018
** printers.c
** File description:
** fonctions servant à l'affichage
*/

#include "../include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int	i = 0;

	for(i = 0; str[i]; i++)
		my_putchar(str[i]);
}

void	my_putgs(char *str)
{
	int	i = 0;

	for (i = 0; str[i]; i++) {
		if (str[i] < 32 && str[i] > 126) {
			my_putchar('\\');
			my_putzero(str[i]);
			my_putnbrb(str[i], "01234567");
		}
		else
			my_putchar(str[i]);
	}
}
