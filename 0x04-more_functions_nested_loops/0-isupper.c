#include "main.h"

/**
 * _isupper - checks if user input is uppercase
 * @c: Integer User Input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */


int _isupper(int c)
{
	char i;
	int isupper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			isupper = 1;
	}

	return (isupper);
}
