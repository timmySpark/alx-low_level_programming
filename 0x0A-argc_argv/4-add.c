#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive number
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: If one of the numbers contains symbols
 *                               that are non-digits - 1
 *                                         Otherwise - 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (argv[i][j] < '0'
					|| argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
