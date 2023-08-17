#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(int c);
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * struct print - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @display: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct print
{
	char *symbol;
	void (*display)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
