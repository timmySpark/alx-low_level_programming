#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two integers
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
