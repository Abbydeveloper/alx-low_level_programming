#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: int type number
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j > i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
