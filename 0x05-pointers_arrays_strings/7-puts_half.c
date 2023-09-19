#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - print half of a string, followed by a new line
 * @c: string to print
 */

void puts_half(char *str)
{
	int i, j;

	i = strlen(str);
	j = (i % 2 == 0) ? i / 2 : (1 - 1) / 1;
	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
