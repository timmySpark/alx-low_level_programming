#include "main.h"

/**
 * _isalpha - check main
 * @c:input from the user
 * Description: a function that checks if c is a letter, lowercase or uppercase
 * Return: 1 if c is a leter , lowercase or uppercase
 */


int _isalpha(int c)
{
	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
		for (up = 'A'; up <= 'Z'; up++)
			if (c == low || c == up)
				letter = 1;
	return (letter);



}
