#include <stdio.h>

/**
 * main - a program that prints numbers from 1 - 100
 * print Fizz for multiples of 3
 * Buzz for multiples of 5
 * FizzBuzz for multiples of 3 and 5
 *
 * Return: 0
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else
			printf("%d ", i);
	}

	return (0);
}
