/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** disp int
*/

#include <limits.h>
#include "tools.h"

int	my_put_nbr(int nb)
{
	int	i;

	if (nb == INT_MIN) {
		my_putstr("-2147483648");
		return (0);
	} else if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	i = nb % 10;
	nb = nb / 10;
	if (nb != 0)
		my_put_nbr(nb);
	my_putchar(i + 48);
	return (0);
}
