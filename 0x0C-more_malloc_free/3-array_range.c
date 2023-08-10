#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: if min > max or the function fails - NULL
 *                  Otherwise - the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *range, i, size = 0;

	if (min > max)
		return (NULL);

	for (i = 0; i <= max; i++)
		size++;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		range[i] = min++;

	return (range);
}
