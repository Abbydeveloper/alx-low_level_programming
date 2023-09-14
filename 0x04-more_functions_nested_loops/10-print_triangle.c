#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print a triangle, followed by a new line
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > n)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j == 1)
					_putchar('#');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
