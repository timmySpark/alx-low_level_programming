#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be counted
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}


/**
 * _strlen_recursion - returns the length of a string
 * @str: string to be checked
 * @start: number to start from
 * @end: end number
 *
 * Return: if start greater than end - 1 otherwise - 0
 */


int check_palindrome(char *str, int start, int end)
{
	if (start >= end)
		return (1);

	if (str[start] == str[end])
		return (check_palindrome(str, start + 1, end - 1));

	return (0);
}


/**
 * is_palindrome - check if a string is a plaindrome or not
 * @s: string to be checked
 *
 * Return: if a string is a palindrome     - 1
 *                     is not a palindrome - 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}
