#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @index: index of the bit to be got
 *
 * Return: if an error occured - 0
 *           Otherwise - value of bit at index @index to be got
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitt;

	if (index >= (sizeof(n) * 8))
		return (-1);
	
	bitt = 1 << index;
	n &= bitt;
	n >>= index;

	return (n & 1);
}
