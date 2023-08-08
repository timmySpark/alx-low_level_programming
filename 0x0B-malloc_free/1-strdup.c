#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to be copied
 *
 * Return: if str is null or insufficient memory is available - NULL
 *                  Otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *string;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 1; i <= str[i]; i++)
		len++;

	string = malloc(sizeof(char) * len);

	for (i = 0; i < str[i]; i++)
		string[i] = str[i];

	return (string);


}
