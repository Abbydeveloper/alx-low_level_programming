#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check for uppercase character
 *
 * @c: character to check for
 * Return: return 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
