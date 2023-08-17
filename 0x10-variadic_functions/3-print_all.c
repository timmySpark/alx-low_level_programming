#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);


/**
 * print_char - print a character
 * @args: argument pointing to char to be printed
 *
 */

void print_char(va_list args)
{
	char lett;

	lett = va_arg(args, int);

	printf("%c", lett);
}

/**
 * print_integer - print a number
 * @args: argument pointing to the number to be printed
 *
 */

void print_integer(va_list args)
{
	int num;

	num = va_arg(args, int);

	printf("%d", num);
}

/**
 * print_float - print a float number
 * @args: argument pointing to number to be printed
 *
 */

void print_float(va_list args)
{
	float digits;

	digits = va_arg(args, double);

	printf("%f", digits);
}

/**
 * print_string - print a string
 * @args: argument pointing to string being printed
 *
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}


/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].display(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(args);

}

