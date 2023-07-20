#include "main.h"

/**
 * print_number - check main
 * @n: Integer input
 * Description: A function that prints an Integer
 * Return: Nothing
 */


void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}


/**
 * print_integer - check main
 * @i: Integer Input
 * Description: Function that prints i
 * Return: Nothing
 */


void print_integer(int i)
{
	int d = 1000000000;

	for (; d >= 1; d /= 10)
		if (i / d != 0)
		{
			_putchar((i / d) % 10 + '0');
		}
}
