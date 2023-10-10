#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of conins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			i = cents / 25;
			cents = cents % 25;
		}
		else if (cents >= 10)
		{
			i += cents / 10;
			cents = cents % 10;
		}
		else if (cents >= 5)
		{
			i += cents / 5;
			cents = cents % 5;
		}
		else if (cents >= 2)
		{
			i += cents / 2;
			cents = cents % 2;
		}
		else if (cents >= 1)
		{
			i += cents / 1;
			cents = 0;
		}
	}

	printf("%d\n", i);
	return (0);
}
