#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two positive numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: result of multiplication
 */

int main(int ac, char **av)
{
	unsigned long mul;
	int i, j;

	if (ac < 3 || ac > 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{

			if (av[i][j] < 48 || av[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atoi(av[1]) * atoi(av[2]);
	printf("%lu\n", mul);
	return (0);
}
