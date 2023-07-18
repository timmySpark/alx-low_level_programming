#include "main.h"

/**
 * main - check Description in main.h
 *
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
