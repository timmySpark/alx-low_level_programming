#include <stdio.h>
#include <stdlib.h>

int string_len(char *str);
char *create_arrays(int size);
char *skip_leading_zeroes(char *str);
void mult_by_digit(char *result, char *num, int digit, int offset);
void add_strings(char *sum, char *addend);

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */


int main(int argc, char *argv[])
{
	int i, total_len, offset;
	char *result, *temp_result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	argv[1] = skip_leading_zeroes(argv[1]);
	argv[2] = skip_leading_zeroes(argv[2]);

	if (!*argv[1] || !*argv[2])
	{
		printf("0\n");
		return (0);
	}

	total_len = string_len(argv[1]) + string_len(argv[2]);
	result = create_arrays(total_len);
	temp_result = create_arrays(total_len);

	for (i = string_len(argv[2]) - 1, offset = 0;
			i >= 0; i--, offset++)
	{
		mult_by_digit(temp_result, argv[1],
				argv[2][i] - '0', offset);
		add_strings(result, temp_result);
	}

	for (i = 0; result[i]; i++)
		if (result[i] != 'x')
			putchar(result[i]);
	putchar('\n');

	free(result);
	free(temp_result);
	return (0);
}

/**
 * string_len - calculates string length
 * @str: input string
 *
 * Return: length of the string
 */

int string_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_arrays - creates an initialized array
 * @size: size of the array
 *
 * Return: pointer to the created array
 */

char *create_arrays(int size)
{
	int i;
	char *array = malloc(size);

	if (!array)
		exit(98);
	for (i = 0; i < size; i++)
		array[i] = 'x';
	array[size - 1] = '\0';

	return (array);
}

/**
 * skip_leading_zeroes - skips leading zeroes in a string
 * @str: input string
 *
 * Return: modified string
 */

char *skip_leading_zeroes(char *str)
{
	while (*str == '0')
		str++;
	return (str);
}

/**
 * mult_by_digit - multiplies string number by a single digit
 * @result: resulting product string
 * @num: input string number
 * @digit: single digit
 * @offset: offset for positioning in result
 */

void mult_by_digit(char *result, char *num, int digit, int offset)
{
	int i, mul, carry = 0;

	for (i = string_len(num) - 1; i >= 0; i--, offset++)
	{
		mul = (num[i] - '0') * digit + carry;
		result[offset] = (mul % 10) + '0';
		carry = mul / 10;
	}
	while (carry)
	{
		result[offset] = (carry % 10) + '0';
		carry /= 10;
		offset++;
	}
}

/**
 * add_strings - sums two strings of numbers
 * @sum: result string
 * @addend: string to add
 */


void add_strings(char *sum, char *addend)
{
	int i, index, total, carry = 0;

	for (i = string_len(addend) - 1; i >= 0; i--)
	{
		total = (sum[i] == 'x' ? 0 : sum[i] - '0') +
			(addend[i] - '0') + carry;

		sum[i] = (total % 10) + '0';
		carry = total / 10;
	}

	index = string_len(addend) - string_len(sum) - 1;

	while (carry)
	{
		total = (sum[index] == 'x' ? 0 :
				sum[index] - '0') + carry;
		sum[index] = (total % 10) + '0';
		carry = total / 10;
		index--;
	}
}

