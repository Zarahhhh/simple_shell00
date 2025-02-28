#include "shell.h"

/**
* print_env - function that prints the current environment
* Return: return status
*/
int print_env(void)
{
	int j = 0, i = 0;

	while (environ[i] != NULL)
	{
		j = 0;
		while (environ[i][j] != '\0')
		{
			_putchar(environ[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

	return (0);
}
