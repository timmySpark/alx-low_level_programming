#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check main
 * @a: Matrix of Integers
 * @size: the size of the matrix
 * Description - prints the sum of the two diagonals
 *                     of a square matrix of Integers.
 */


void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;


	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

