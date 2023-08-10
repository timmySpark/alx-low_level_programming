#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concetenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n:  maximum bytes of s2 to be printed
 *
 * Return: if n is greater or equal to the length of s2
 *                               - use the entire string s2
 *         if the function fails -  NULL
 *         Otherwise - point to a newly allocated space in memory ,
 *         which contains: s1, first n bytes of s2 and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_word;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat_word = malloc(sizeof(char) * (len + 1));

	if (concat_word == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		concat_word[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat_word[len++] = s2[i];

	concat_word[len] = '\0';

	return (concat_word);

}
