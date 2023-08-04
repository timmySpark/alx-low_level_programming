#include <stdio.h>

/**
 * main - a program that prints it's name followed by a new line
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
