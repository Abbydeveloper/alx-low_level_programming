#include <stdio.h>
#include "main.h"

/**
 * rev_string - print a string in reverse followed by a new line
 * @s: string to print
 */

void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	j = i;

	for (j = i; j >= 0; j--)
	{
		if (s[j] != '\0')
			_putchar(s[j] + '\0');
	}
}
