#include "main.h"

/**
 * compare_strings - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain special characters
 *
 * Return: if strings are considered identical - 1 otherwise - 0
 */

int compare_strings(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s2 == '*')
	{
		return (compare_strings(s1, s2 + 1) ||
				(*s1 != '\0' && compare_strings(s1 + 1, s2)));
	}

	else if (*s1 != '\0' && *s2 == *s1)
		return (compare_strings(s1 + 1, s2 + 1));

	return (0);
}


/**
 * wildcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain special characters
 *
 * Return: if strings are considered identical - 1 otherwise - 0
 */

int wildcmp(char *s1, char *s2)
{
	return (compare_strings(s1, s2) ? 1 : 0);
}
