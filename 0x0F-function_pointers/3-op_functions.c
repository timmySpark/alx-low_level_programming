#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number to be added
 *
 * Return: the sum of a and b
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the result of  division of a and b
 */


int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division  of a and b
 */


int op_mod(int a, int b)
{
	return (a % b);
}
