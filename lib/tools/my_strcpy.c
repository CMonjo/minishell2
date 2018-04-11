/*
** EPITECH PROJECT, 2017
** task01
** File description:
** my str copy
*/

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

char	*my_strcpy(char *dest, char const *src)
{
	if (src == NULL)
		return (dest);
	if (dest == NULL)
		dest = (char*)malloc(sizeof(char)*(my_strlen(src)+1));
	for (int i = 0; src[i] != '\0'; i++) {
		dest[i] = src[i];
		dest[i+1] = '\0';
	}
	return (dest);
}
