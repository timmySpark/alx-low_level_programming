#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Prints Numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: numbers of integers passed to the functionn
 *
 * Return: if seperator is NULL - don't print
 *         Otherwise - print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
