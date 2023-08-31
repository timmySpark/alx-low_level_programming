#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: The bit
 * @index: Index of the bit to be got
 *
 * Return: if an error occurred - -1
 *                  Otherwise    - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
