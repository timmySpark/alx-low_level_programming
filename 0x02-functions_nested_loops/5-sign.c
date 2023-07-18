#include "main.h"

/**
 * print_sign - check main
 * @n: user input
 * Description: a function that checks if an input is greater, lesser than
 * or equals Zero
 * Returns: 1 if n is greater than zero
 *         -1 if n is less than and zero
 *          0 if n is equals zero
 */


int print_sign(int n)
{
	int num = 0;

	if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -1;
	}
	else
	{
		_putchar('0');
		num = 0;
	}
	return (num);
}
