/*
** EPITECH PROJECT, 2018
** flags_three.c
** File description:
** troisieme page de flags
*/

#include "../include/my.h"

void	flag_u(va_list ap)
{
	my_putnbru(va_arg(ap, unsigned int));
}

void	flag_x(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "0123456789abcdef");
}
