#include "main.h"

/**
 * _islower - check Description
 * @c : an input from the user
 * Description : a function that checks for lowercase characters
 * Return : 1 if is lowercase and 0 if is uppercase
 */

int _islower(int c)
{
	char alpha;
	int lower = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha == c)
			lower = 1;
	return (lower);
}

