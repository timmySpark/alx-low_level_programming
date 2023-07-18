#include "main.h"

/**
 * print_alphabet_x10 - check Description
 * Description - a function that prints the letters in the alphabet
 * in lowercase ten times, followed by a new line
 * Returns - Nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; ++i)
	{
		for (j = 'a'; j <= 'z'; ++j)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
