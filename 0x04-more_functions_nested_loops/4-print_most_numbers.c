#include "main.h"

/**
 * print_most_numbers - check main
 * Description: prints numbers 0 - 9 except 2 and 4
 * followed by a new line
 * Return: 0
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}

	_putchar('\n');

}
