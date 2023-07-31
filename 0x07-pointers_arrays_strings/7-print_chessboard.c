#include "main.h"

/**
 * print_chessboard - check main
 * @a - board to be printed
 * Description - print a chessboard
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}
