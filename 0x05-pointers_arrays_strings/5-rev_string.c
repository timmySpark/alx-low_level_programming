#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be printed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int str, rvrsed;
	char character;

	for (str = '\0'; s[str] != 0; str++)
	rvrsed = 0;
	for (str = str - 1; rvrsed < str; rvrsed++)
	{
		character = s[str];
		s[str] = s[rvrsed];
		s[rvrsed] = character;
		str--;
	}
}
