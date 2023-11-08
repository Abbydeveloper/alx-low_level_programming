#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int i, j;
	char *n = (char *)main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(av[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%.2hhx", n[i]);
		if (i < j - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
