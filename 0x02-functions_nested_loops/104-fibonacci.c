#include <stdio.h>

/**
 * main - a program that displays the first 98 fibonacci numbers
 * followed by a new line
 *
 * Return: Always 0
 */


int main(void)
{
	unsigned int num_1 = 0, num_2 = 1, sum;
	int count;

	for (count = 1; count < 98; count++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;

		if (count == 98)
			printf("%u\n", sum);
		printf("%u, ", sum);
	}

	return (0);
}
