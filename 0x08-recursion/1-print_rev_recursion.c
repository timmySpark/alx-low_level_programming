#include "main.h"

/**
 * _print_rev_recursion - check main
 * Description - prints a string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
