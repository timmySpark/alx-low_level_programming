#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 *                                        element of an array.
 * @array: array to be used
 * @size: size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	for (; size--; array++)
	{
		action(*array);
	}
}
