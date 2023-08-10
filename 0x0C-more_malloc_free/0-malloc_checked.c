#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory
 * @b: memory to be allocated
 *
 * Return: if mallocs fails - teminate with value of 98
 *                 Otherwise - a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);

	if (check == NULL)
		exit (98);

	return (check);
}
