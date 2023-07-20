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
 * @m: Integer Input
 * Description: Function that prints m
 * Return: Nothing
 */


void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}
