/*
** EPITECH PROJECT, 2017
** my_exec_2017
** File description:
** lib: my count char
*/

#include <stdio.h>
#include "tools.h"

int	my_count_char(char *str, char c)
{
	int count = 0;

	for (int i = 0; str != NULL && str[i] != '\0'; i++) {
		if (str[i] == c)
			count++;
	}
	return (count);
}
