#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: number type integer
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
