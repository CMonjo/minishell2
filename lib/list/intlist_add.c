/*
** EPITECH PROJECT, 2018
** ListLib
** File description:
** int linked list add
*/

#include "list.h"

int	intlist_add(intlist_t **list, int value)
{
	intlist_t *head = (intlist_t*)malloc(sizeof(intlist_t));

	head->value = value;
	head->next = *list;
	*list = head;
	return (0);
}

int	intlist_append(intlist_t **list, int value)
{
	intlist_t *_tmp = *list;
	intlist_t *end = (intlist_t*)malloc(sizeof(intlist_t));

	end->value = value;
	end->next = NULL;
	if (_tmp == NULL) {
		*list = end;
		return (0);
	}
	for (; _tmp != NULL; _tmp = _tmp->next) {
		if (_tmp->next == NULL) {
			_tmp->next = end;
			break;
		}
	}
	return (0);
}
