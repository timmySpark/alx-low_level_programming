#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of elements
 * @size: size of each element
 *
 * Return: if nemb or size is 0 or the function fails - NULL
 *                    Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *mmm;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	array = malloc(total_size);

	mmm = array;

	if (array == 0)
		return (NULL);

	for (i = 0; i < total_size; i++)
		mmm[i] = '\0';

	return (array);

}
