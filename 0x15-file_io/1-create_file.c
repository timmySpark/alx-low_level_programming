#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: null terminated string to write to file
 *
 * Return: On failure or filenam is NULL - -1
 *         Otherwise - 1
 */


int create_file(const char *filename, char *text_content)
{
	int f_open, f_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f_write = write(f_open, text_content, len);

	if (f_open == -1 || f_write == -1)
		return (-1);

	close(f_open);
	return (1);
}
