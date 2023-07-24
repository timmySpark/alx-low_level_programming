#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character input s
 * Return: The length of @str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
