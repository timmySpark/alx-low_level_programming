#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointing to strings of 0 and 1 chars
 *
 * Return: if there is one or more chars in the string b
 *                                      that is not 0 or 1 - 0
 *                                      b is NULL - 0
 *         Otherwise - the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		num <<= 1;
	
		if (b[len] == '1')
		       num += 1;
	
		else if (b[len] != '0')
			return (0);

	}

	return (num);
}
