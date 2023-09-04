#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *buffer_store_char(char *file);
void f_close(int fd);

/**
 * buffer_store_char - allocate 1024 bytes for a buffer
 * @file: name of file whose character are to be stored
 *
 * Return: A pointer to the created buffer
 */

char *buffer_store_char(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * f_close - close a file descriptor
 * @fd: file descriptor to be closed
 */

void f_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies a content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: array of pointers to the argument
 *
 * Description - if number of arguments is not the correct one
 *                                                     - exit with code 97
 *               if file_from doesn't exist - exit with code 98
 *
 * Return: On success - 0
 */

int main(int argc, char *argv[])
{
	int from, to, f_read, f_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffer_store_char(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	f_read = read(from, buffer, BUFFER_SIZE);

	while (f_read > 0)
	{
		if (from == -1 || f_read == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);

			free(buffer);
			exit(98);
		}

		f_write = write(to, buffer, f_read);

		if (to == -1 || f_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);

			free(buffer);
			exit(99);
		}

		f_read = read(from, buffer, BUFFER_SIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	f_close(from);
	f_close(to);

	return (0);

}
