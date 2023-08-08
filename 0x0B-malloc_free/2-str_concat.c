#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: Failure of concatenation - NULL
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[index++] = s2[i];

	concat[len] = '\0';
	return (concat);
}
