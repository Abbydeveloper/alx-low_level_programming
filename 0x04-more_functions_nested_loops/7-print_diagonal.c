#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
