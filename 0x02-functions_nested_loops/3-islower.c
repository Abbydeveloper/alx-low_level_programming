#include <stdio.h>
#include "main.h"

/**
 * _islower - check if a character is lower case
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	int i = c;
	int j;

	if (i < 97 || i > 122)
		j = 0;
	else
		j = 1;

	return (j);
}
