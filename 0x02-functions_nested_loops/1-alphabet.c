#include "main.h"

/**
 * print_alphabet - check Description
 * Description - a function that prints the alphabet in lowercase
 * followed by a new line
 * Return: Nothing
 */


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
		_putchar(alpha);
	_putchar('\n');
}
