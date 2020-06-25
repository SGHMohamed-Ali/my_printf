/*
** EPITECH PROJECT, 2018
** tools.c
** File description:
** utilitaire
*/

#include "../include/my.h"

int	check_condition(char *str, int i)
{
	int	idx_num = 0;
	
	while (check_flag(str[i]) == -1) {
		if (str[i] <= '9' && str[i] >= '0' && str[i]) {
			i++;
			idx_num++;
		}
		else
			return (-1);
	}
	return (idx_num);
}

int	my_getnbr(char *str)
{
	int	i = 0;
	int	dest = 0;

	for (i = 0; str[i]; i++) {
		dest = (str[i] + 48);
		dest = dest * 10;
	}
	return ((dest / 10));
}

char	*str_extrate(char *str, int compt, int idx_num)
{
	char	*dest;
	int	i = 0;

	if ((dest = malloc(sizeof(char) * idx_num + 1)) == NULL)
		return (NULL);
	for (i = 0; dest[i] && str[compt]; i++, compt++)
		dest[i] = str[compt];
	return (dest);
}
