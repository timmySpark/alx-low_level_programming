#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n, index = 0, len = 0;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
