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
	char w;
	int l;

	for (l = '0'; l <= '9'; ++l)
	{
		putchar(l);
	}
	for (w = 'a'; w <= 'f'; ++w)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
