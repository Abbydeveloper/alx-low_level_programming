#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if a character is alphabetic
 *
 * @c - character to check
 *
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _isalpha(int c)
{
	int i = c;
	int j;

	if (i < 65 || i > 122)
		j = 0;
	else
		j = 1;

	return (j);
}
