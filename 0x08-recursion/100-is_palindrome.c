#include "main.h"

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
