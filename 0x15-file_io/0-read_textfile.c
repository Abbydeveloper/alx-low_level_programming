#include <stdlib.h>
#include "main.h"

/**
* read_textfile - read a text file and print it to the POSIX stdout
* @filename: name of file to print
* @letters: number of letters it can read and print
*
* Return: 0 if the file cannot be opened or read
* 0 if the file is NULL or the write fails or does not return
* the expected number of bytes
* the number of letters it can read and print if successful
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1
		|| read_file == -1
		|| write_file == -1
		|| write_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);
	return (write_file);
}
