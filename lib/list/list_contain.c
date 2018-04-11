/*
** EPITECH PROJECT, 2018
** ListLib
** File description:
** contain
*/

#include "list.h"

int	list_contain(list_t *list, void *data_to_check)
{
	list_t *_tmp = list;

	for (; _tmp != NULL; _tmp = _tmp->next) {
		if (_tmp->data == data_to_check)
			return (1);
	}
	return (0);
}
