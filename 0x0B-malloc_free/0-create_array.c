#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *                         and initializes it with a specific char.
 * @size: size of array to be initialized
 * @c:    specific char to initialize array with
 *
 * Return: if size = 0 or the function fails - NULL
 *         Otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
