/*
** EPITECH PROJECT, 2018
** ListLib
** File description:
** size
*/

#include "list.h"

int	list_size(list_t *list)
{
	list_t *_tmp = list;
	int size = 0;

	for (; _tmp != NULL; _tmp = _tmp->next) {
		size++;
	}
	return (size);
}
