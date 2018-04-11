/*
** EPITECH PROJECT, 2018
** ListLib
** File description:
** list getter
*/

#include "list.h"

void *list_get_last(list_t *list)
{
	list_t *_tmp = list;

	if (list == NULL)
		return (NULL);
	if (list->last != NULL)
		return (list->last);
	for (; _tmp != NULL; _tmp = _tmp->next) {
		if (_tmp->next == NULL) {
			list->last = _tmp;
			return (_tmp);
		}
	}
	return (NULL);
}
