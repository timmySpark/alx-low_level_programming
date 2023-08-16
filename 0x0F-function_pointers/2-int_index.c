#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: if size <+ 0 or no element matches -- 1
 *         Otherwise - return the index of the first element
 *         for which the cmp function doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
