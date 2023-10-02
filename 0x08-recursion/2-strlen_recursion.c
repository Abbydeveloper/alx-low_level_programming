#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - print a string in reverse using recursion
 * @s: string to print
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}

	return (0);
}
