#include "main.h"

/**
 * print_line - check main
 * @n: User Input
 * Description: draws a straightline in the terminal
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		 _putchar('_');
	}

	_putchar('\n');
}
