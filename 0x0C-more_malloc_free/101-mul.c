#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_digit - print digit
 * @n: digit to print
 * @i: number of times to loop
 */

void print_digit(int n, int i)
{
	for (; i >= 1; i/= 10)
	{
		if (n / i != 0)
			_putchar((n / i % 10) + '0');
	}
}

/**
 * main - multiply two positive numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: result of multiplication
 */

int main(int ac, char **av)
{
	unsigned long int mul;
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

	print_digit(mul, 1000000000;

	return (0);
}
