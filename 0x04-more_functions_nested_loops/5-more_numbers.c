#include "main.h"

/**
 * more_numbers - check main
 * Description: print all digits from 0 - 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
				_putchar(d / 10 + '0');

			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
