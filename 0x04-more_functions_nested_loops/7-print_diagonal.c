#include "main.h"

/**
 * print_diagonal - check main
 * @n: User Input
 * Description: draw a diagonal line on the terminal
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	_putchar('\n');
}
