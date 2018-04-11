/*
** EPITECH PROJECT, 2018
** minishell1_2017
** File description:
** lib my str equal to another str
*/

#include "tools.h"

int	my_streqstr(char *str1, char *str2)
{
	if (my_strlen(str1) != my_strlen(str2))
		return (0);
	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] != str2[i])
			return (0);
	}
	return (1);
}
