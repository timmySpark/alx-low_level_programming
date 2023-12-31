#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int rvs, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		rvs = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = rvs;
	}
}
