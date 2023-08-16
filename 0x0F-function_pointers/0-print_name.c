#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: name to be printed
 * @f: pointer to the function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
