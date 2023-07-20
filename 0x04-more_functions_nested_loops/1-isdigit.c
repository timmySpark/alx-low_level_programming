#include "main.h"

/**
 * _isdigit - check main
 *
 * @c: Integer user input
 *
 * Description: checks if c is a digit
 *
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	char d;
	int isdigit = 0;

	for (d = '0' ; d <= '9'; d++)
	{
		if (c == d)
			isdigit = 1;
	}

	return (isdigit);
}
