#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: bytes of the new memory block
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *alloc;
	char *fill, *prev_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		alloc = malloc(new_size);

		if (alloc == NULL)
			return (NULL);
		return (alloc);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	prev_ptr = ptr;

	alloc = malloc(sizeof(*prev_ptr) * new_size);

	if (alloc == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = alloc;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *prev_ptr++;

	free(ptr);
	return (alloc);
}
