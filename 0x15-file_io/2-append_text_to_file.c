#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you dont have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		length = 0;
	else
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);
	return (1);
}
