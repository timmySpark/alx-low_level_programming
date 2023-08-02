#include "main.h"

/**
 * check_divisibility - check if an integer is divisible
 * @num: input integer to be checked
 * @i: number to be incremented on
 *
 * Return: if @num finds a divisor   - return 0
 *         if @num doesn't a divisor - return 1
 */


int check_divisibility(int num, int i)
{
	if (i * i > num)
		return (1);
	if (num % i == 0 || num % (i + 2) == 0)
		return (0);
	return (check_divisibility(num, i + 6));
}


/**
 * is_prime_number - check if an integer is a prime number
 * @n: input integer to be checked
 *
 * Return: if @n is a prime number - return 1
 *         if @n isn't a prime number - return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (check_divisibility(n, 5));
}
