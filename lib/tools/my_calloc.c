/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2017
** File description:
** my malloc
*/

#include <stdlib.h>
#include "tools.h"

char *my_calloc(int nbchars)
{
	char *str = (char*)malloc(sizeof(char)*nbchars);

	if (str == NULL)
		return (NULL);
	for (int i = 0; i < nbchars; i++) {
		str[i] = '\0';
	}
	return (str);
}
