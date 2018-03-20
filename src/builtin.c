/*
** EPITECH PROJECT, 2017
** Project minishell1
** File description:
** Input file
*/

#include "main.h"

void check_exit_status(shell_t *shell)
{
	if (my_str_isnum(shell->command[1]) == 0)
		my_putstr("exit: Expression Syntax.\n");
	else if (my_str_isnum(shell->command[1]) == 2)
		my_putstr("exit: Badly formed number.\n");
	else {
		shell->status = my_getnbr(shell->command[1]);
		shell->status %= 256;
	}
}

int read_command_cd_env(shell_t *shell, nenv_t *nenv)
{
	if (my_strcmp(shell->command[0], "cd") == 0) {
		check_cd(shell, nenv);
		return (1);
	}
	if (my_strcmp(shell->command[0], "setenv") == 0) {
		return (1);
	}
	if (my_strcmp(shell->command[0], "unsetenv") == 0)
		return (1);
	return (0);
}

int read_command(shell_t *shell, nenv_t *nenv)
{
	if (my_strcmp(shell->command[0], "exit") == 0) {
		if (shell->command[1] != NULL)
			check_exit_status(shell);
		else
			shell->status = 0;
		return (1);
	}
	if (my_strcmp(shell->command[0], "env") == 0) {
		display_env(shell);
		return (2);
	}
	if (read_command_cd_env(shell, nenv) == 1)
		return (1);
	return (0);
}
