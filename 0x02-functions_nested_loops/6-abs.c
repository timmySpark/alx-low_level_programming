#include "main.h"

/**
 *_abs - Check Holberton
 * @r: An integer User input
 * Description: This function returns absolute value of the number of the user
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
