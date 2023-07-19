#include <stdio.h>

/**
 * main - a program that prints 50 fibonacci numbers starting with 1 and 2
 * followed by a new line
 *
 * Return: Always 0
 */


int main(void)
{
	long num_1 = 0, num_2 = 1, sum, count;

	for (count = 0; count < 50 ; count++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;

		if (count == 49)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
	}
	return (0);
}
