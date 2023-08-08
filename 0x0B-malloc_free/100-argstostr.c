#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments in this program
 * @ac: number of arguments in the program
 * @av: arguments in the program
 *
 * Return: if ac == 0 or av ==0 or if it fails  - NULL
 *                        otherwise - a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int arg, i, b, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			string[i++] = av[arg][b];

		string[i++] = '\n';
	}

	string[size] = '\0';

	return (string);
}
