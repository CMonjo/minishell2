/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "tools.h"

int	flags_handler(char flag, va_list list)
{
	switch (flag) {
		case 'c':
			my_putchar(va_arg(list, int));
			break;
		case 's':
			my_putstr(va_arg(list, char*));
			break;
		case 'd':
			my_put_nbr(va_arg(list, int));
			break;
	}
	return (0);
}

int	my_printf(char *str, ...)
{
	va_list list;

	va_start(list, str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '%') {
			i++;
			flags_handler(str[i], list);
		} else
			my_putchar(str[i]);
	}
	va_end(list);
	return (0);
}
