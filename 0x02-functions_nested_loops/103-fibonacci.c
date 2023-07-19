#include <stdio.h>

/**
 * main - create a fibonacci sequence of values that dont exceed 4000000
 * and prints the sum of the even valued terms
 * followed by a new line
 *
 * Return: always 0
 */


int main(void)
{
	long num_1 = 0, num_2 = 1, sum, total;
	int count;

	for (count = 1; count < 50; count++)
	{
		sum = num_1 + num_2;

		if (sum % 2 == 0 && sum < 4000000)
			total += sum;
		num_1 = num_2;
		num_2 = sum;
	}

	printf("%lu\n", total);

	return (0);
}
