/*
** EPITECH PROJECT, 2018
** ListLib
** File description:
** cpy
*/

#include "list.h"

list_t *list_copy(list_t *list)
{
	list_t *cpy = NULL;
	list_t *_tmp = list;

	for (; _tmp != NULL; _tmp = _tmp->next) {
		list_append(&cpy, _tmp->data);
	}
	return (cpy);
}
