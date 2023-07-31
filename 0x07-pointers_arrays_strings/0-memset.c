#include "main.h"

/**
 * *_memset - check main
 * Description - a function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Return: a pointer to the memory area s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
