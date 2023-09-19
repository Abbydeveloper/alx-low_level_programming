#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print every other character of a string
 * starting with the first character, followed by
 * a new line
 *
 * @str: str to print
 */

void puts2(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
