#include "main.h"
#include <stddef.h>

/**
 * _strlen - a function that returns the length of a string
 * @str: character input str
 * Return: The length of str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
