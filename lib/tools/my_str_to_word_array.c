/*
** EPITECH PROJECT, 2017
** task04
** File description:
** str to word array
*/

#include <stdlib.h>
#include <stdio.h>
#include "tools.h"

int	my_str_split_fill(char **arr, int word, char *buff, int *buffi)
{
	arr[word] = my_calloc(my_strlen(buff)+1);
	for (int i = 0; arr[word] != NULL && i < my_strlen(buff); i++)
		arr[word][i] = buff[i];
	*buffi = 0;
	word++;
	return (word);
}

void	my_str_split_addbuff(char *buff, char *str, int *buffi, int i)
{
	buff[*buffi] = str[i];
	buff[*buffi+1] = '\0';
	*buffi += 1;
}

int	check_char(char *str, int i, char c, int *quotes)
{
	if (str[i] == '\"') {
		*quotes += 1;
		return (1);
	}
	if (str[i] == c && (str[i+1] == c || str[i+1] == '\0'))
		return (1);
	return (0);
}

int	check_onlyc(char *str, char c, char **arr)
{
	int nb_char = my_count_char(str, c);

	if (my_strlen(str) == nb_char) {
		arr[0] = my_calloc(1);
	}
	return (0);
}

char **my_str_to_word_array(char *str, char c)
{
	int nblines = my_count_char(str, c) + 1;
	char **arr = (char**)malloc(sizeof(char*)*(nblines+1));
	char	buff[my_strlen(str)+2];
	int bufi = 0;
	int word = 0;
	int quot = 0;

	for (int i = 0; str != NULL && i <= my_strlen(str); i++) {
		if (check_char(str, i, c, &quot) || (bufi==0 && str[i]==c))
			continue;
		if ((str[i]!=c && str[i]!='\0') || quot % 2 == 1) {
			my_str_split_addbuff(buff, str, &bufi, i);
			continue;
		}
		word = my_str_split_fill(arr, word, buff, &bufi);
	}
	check_onlyc(str, c, arr);
	arr[word] = NULL;
	return (arr);
}
