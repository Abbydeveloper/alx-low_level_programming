#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of  y
 * @x: number to multiply
 * @y: power integer
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
