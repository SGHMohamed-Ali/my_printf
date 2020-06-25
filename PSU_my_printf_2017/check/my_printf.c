/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** fonction en remplacement du printf
*/

#include "../include/my.h"

int	my_printf(char *str, ...)
{
	int	i = 0;
	va_list	ap;

	va_start(ap, 0);
	for (i = 0; str[i];) {
		if (str[i] == '%' && (checkflag(str[i + 1]) != -1)) {
			my_ptab(checkflag(str[i + 1]), ap);
			i += 2;
		}
		else {
			my_putchar(str[i]);
			i++;
		}
	}
	va_end(ap);
	return (0);
}

int	checkflag(char c)
{
	int	i = 0;
	char	str[13] = "diuoxXcsSbp%";

	for (i = 0; str[i]; i++)
		if (str[i] == c)
			return (i);
	return (-1);
}

void	my_ptab(int i, va_list(ap))
{
	void	(*tab[13])(va_list);

	tab[0] = &flag_d;
	tab[1] = &flag_i;
	tab[2] = &flag_u;
	tab[3] = &flag_o;
	tab[4] = &flag_x;
	tab[5] = &flag_gx;
	tab[6] = &flag_c;
	tab[7] = &flag_s;
	tab[8] = &flag_gs;
	tab[9] = &flag_b;
	tab[10] = &flag_p;
	tab[11] = &flag_mod;
	tab[12] = NULL;
	(*tab[i])(ap);
}
int	main()
{
	my_printf("%d\n aidphéiapodhaeifdai&é", 123456);
	return(0);
}
