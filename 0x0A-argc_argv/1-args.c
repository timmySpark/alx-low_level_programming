#include <stdio.h>

/**
 * main - a program that prints it's name followed by a new line
 * @argc: Number of command line arguments supplied to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
