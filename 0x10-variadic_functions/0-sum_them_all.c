#include "variadic_functions.h"
#include <stdargs.h>

/**
 * sum_them_all - Returns the sum of all of it's parameters
 * @n: number of parameters passed
 *
 * Return: if n == 0 - 0
 *         Otherwise - the sum of all it's parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return sum;
}
