#include <stdio.h>

/**
 * main - a program that displays the first 98 fibonacci numbers
 * followed by a new line
 *
 * Return: Always 0
 */


int main(void)
{
	unsigned long num_1 = 0, num_2 = 1;
	long sum;
	int count;

	for (count = 1; count < 98; count++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;

		if (count == 98)
			printf("%lu\n", sum);
		printf("%lu, ", sum);
	}

	return (0);
}
