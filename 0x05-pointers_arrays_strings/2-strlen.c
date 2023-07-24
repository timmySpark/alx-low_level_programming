#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character input s
 * Return: The length of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
