/*
** EPITECH PROJECT, 2018
** my_printnb.c
** File description:
** printer
*/

#include "../include/my.h"

void	my_putnbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		my_putnbr(nb * -1);
	}
	if (nb > 9) {
		my_putnbr(nb / 10);
		my_putnbr(nb % 10);
	}
	else
		my_putchar(nb + 48);
}

void	my_putnbrb(unsigned int nb, char *base)
{
	int	div = 1;
	int	res;
	int	i = 0;

	for (; base[i]; i++);
	while ((nb / div) >= i)
		div = div * i;
	while (div > 0) {
		res = (nb / div % i);
		my_putchar(base[res]);
		div = div / i;
	}
}

void	my_putnbru(unsigned int nb)
{
	unsigned int	i = 1;

	while (nb / i >= 10)
		i = i * 10;
	while (i != 0) {
		my_putchar((nb /i) % 10 + 48);
		i = i / 10;
	}
}

void	my_putzero(char c)
{
	if (c < 8) {
		my_putchar('0');
		my_putchar('0');
	}
	else
		my_putchar('0');
}
