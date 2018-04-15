/*
** EPITECH PROJECT, 2017
** Project minishell1
** File description:
** Input file
*/

#include "main.h"

int check_empty_line(char *str)
{
	int i = 0;

	str = replace_tab(str);
	if (str[0] == '\n' || str[0] == '\0')
		return (1);
	for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
		if (str[i] == '|')
			return (1);
	}
	for (i = 0; str[i] == ' ' || str[i] == '\n' || str[i] == '\0'; i++) {
		if (str[i] == '\n' || str[i] == '\0')
			return (1);
	}
	return (0);
}
