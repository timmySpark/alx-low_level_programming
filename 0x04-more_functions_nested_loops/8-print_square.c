#include "main.h"

/**
 * print_square - check main
 * @size: integer input
 * Description: prints a square followed by a new line
 * Return: Nothing
 */

void print_square(int size)
{
	int i, s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
