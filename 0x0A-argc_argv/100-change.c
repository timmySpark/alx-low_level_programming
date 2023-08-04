#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 *        make change for an amount of money
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: If the numbers of arguments
 *                           is not exactly one - 1
 *                                    Otherwise - 0
 */

int main(int argc, char *argv[])
{
	int i, coins = 0, cents;
	int values[] = {25, 10, 5, 2, 1};
	int size = sizeof(values) / sizeof(values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", coins);
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		while (cents >= values[i])
		{
			cents -= values[i];
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}
