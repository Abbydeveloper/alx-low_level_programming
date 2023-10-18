#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 if successful
 * 1 if otherwise
 */
int main(int ac, char **av)
{
	int (*oprt)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(av[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(av[1]), atoi(av[3])));
	return (0);
}
