/*
** EPITECH PROJECT, 2018
** flags_two.c
** File description:
** suite des flags
*/

#include "../include/my.h"

void	flag_i(va_list ap)
{
	my_putnbr(va_arg(ap, int));
}

void	flag_mod(va_list ap)
{
	write(1, "%", 1);
}

void	flag_o(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "01234567");
}

void	flag_p(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putchar('0');
	my_putchar('x');
	my_putnbrb(nb, "0123456789abcdef");
}

void	flag_s(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}
