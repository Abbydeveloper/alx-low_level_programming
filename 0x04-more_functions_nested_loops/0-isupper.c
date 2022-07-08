#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 (Success)
 * If not uppercase, return 0
 */

int _isupper(int c)
{
	if (c >= 'A' || <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
