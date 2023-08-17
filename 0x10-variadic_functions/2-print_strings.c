#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by an new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: if seperator is NULL - don't print
 *         if one of the strings is NULL , (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);


		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
