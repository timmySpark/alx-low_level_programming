#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 *                          to the POSTIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: if filename is NULL or file can't be opened - 0
 *         if write fails or doesn't write the expected amount of bytes - 0
 *         Otherwise - the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	open_file  = open(filename, O_RDONLY);
	read_file  = read(open_file, buf, letters);
	write_file = write(STDOUT_FILENO, buf, read_file);

	if (open_file == -1 || read_file == -1 || write_file == -1
			|| write_file != read_file)
	{
		free(buf);
		return (0);
	}

	buf[read_file] = '\0';
	free(buf);
	close(open_file);
	return (write_file);
}
