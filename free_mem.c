#include "shell.h"
/**
 * free_dp - A function that frees all the memory allocated for command
 * @command: The pointer to allocated memory to free
 * Return: Nothing
 */

void free_dp(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i]);
	free(commad)
}

/**
 * free_exit - A function that frees all the memory allocated and exit.
 * @command: The pointer to allocate memory to free
 * Return: Nothing.
 */

void free_exit(char **command)
{
	 size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;

	}

	if (command[i] == NULL)
		free(command[i]);
	free(commad);
	exit(EXIT_FAILURE);
}
