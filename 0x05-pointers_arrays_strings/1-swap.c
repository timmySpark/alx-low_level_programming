#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: First Integer Value
 * @b: Second Integer Value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
