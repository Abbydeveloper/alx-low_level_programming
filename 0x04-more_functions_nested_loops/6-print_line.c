#include <stdio.h>
#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; n++)
			_putchar('_');
	}
	_putchar('\n');
}