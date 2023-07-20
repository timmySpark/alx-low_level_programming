#include "main.h"

/**
 * print_triangle - check main
 * @size: integer input
 * Description: prints the size of a triangle followed by a new line
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, s, n = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
			{
				if (s < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
