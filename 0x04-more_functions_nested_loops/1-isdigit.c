#include <stdio.h>

/**
 * _isdigit - check if character is a single digit number
 * @c: digit to check
 *
 * Return: 0 if c is a digit
 * otherwise return 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
