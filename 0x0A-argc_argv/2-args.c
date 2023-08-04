#include <stdio.h>

/**
 * main - a program that prints each argument on a new line
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
