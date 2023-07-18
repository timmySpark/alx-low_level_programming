#include "main.h"

/**
 * print_last_digit - check main
 * @d: integer user input
 * Description: a function that prints the last digit of a number
 * Return: value of the last digit of d
 */

int print_last_digit(int d)
{
	int last_digit;

	if (d < 0)
		last_digit = -1 * (d % 10);
	else
		last_digit = d % 10;
	_putchar((last_digit % 10) + '0');
	return (last_digit % 10);
}
