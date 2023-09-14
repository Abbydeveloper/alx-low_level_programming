#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 *
 * @c: character to check for
 * Return: 1 if c is a digit
 * 0 if otherwise
 */

int _isdigit(int c)
{
	int ascii_char = c + '0';

	if (ascii_char <= 48 && ascii_char >= 57)
		return (1);
	else
		return (0);
}
