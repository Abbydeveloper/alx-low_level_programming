#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the fiel
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, length;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		length = 0;
	} else {
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}
	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(open_file, text_content, length);
	if (open_file == -1 || write_file == -1)
	{
		return (-1);
	}
	close(open_file);
	return (1);
}
