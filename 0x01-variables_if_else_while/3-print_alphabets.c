#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
		putchar(lowercase);
	putchar('\n');

	return (0);
}
