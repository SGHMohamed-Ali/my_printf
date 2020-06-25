/*
** EPITECH PROJECT, 2018
** flag.c
** File description:
** flags
*/

#include "../include/my.h"

void	flag_d(va_list ap)
{
	my_putnbr(va_arg(ap, int));
}

void	flag_b(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "01");
}

void	flag_c(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void	flag_gs(va_list ap)
{
	my_putgs(va_arg(ap, char *));
}

void	flag_gx(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "0123456789ABCDEF");
}
