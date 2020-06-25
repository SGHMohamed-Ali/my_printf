/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** pourintouashou
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>
#include <unistd.h>

int	my_printf(char *str, ...);
int	checkflag(char c);
void	my_putchar(char c);
void	flag_mod(va_list ap);
void	flag_b(va_list ap);
void	flag_c(va_list ap);
void	flag_d(va_list ap);
void	flag_i(va_list ap);
void	flag_o(va_list ap);
void	flag_s(va_list ap);
void	flag_u(va_list ap);
void	flag_x(va_list ap);
void	flag_gx(va_list ap);
void	flag_gs(va_list ap);
void	flag_p(va_list ap);
void	my_putzero(char c);
void	my_ptab(int i, va_list(ap));
void	my_putnbr(int nb);
void	my_putnbru(unsigned int nb);
void	my_putnbrb(unsigned int nb, char *base);
void	my_putstr(char *str);
void	my_putgs(char *str);

#endif /*_MY_H_*/
