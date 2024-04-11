#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * close_file - close files
 * @file: file to close
 *
 * Return: void
 */
void close_file(int file)
{
	int a;

	a = close(file);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - copy content of one file into another file
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int filename, new_file, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	filename = open(argv[1], O_RDONLY);
	read_file = read(filename, buffer, 1024);
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filename == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(new_file, buffer, read_file);
		if (new_file == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_file = read(filename, buffer, 1024);
		new_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_file > 0);
	free(buffer);
	close_file(filename);
	close_file(new_file);
	return (0);
}
