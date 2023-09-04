#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: A pointer to a string to write to the file
 *
 * Return: On Failure - -1
 *         Otherwise  -  1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f_open =  open(filename, O_RDWR | O_APPEND);
	f_write = write(f_open, text_content, len);

	if (f_open == -1 || f_write == -1)
		return (-1);

	close(f_open);
	return (1);
}
