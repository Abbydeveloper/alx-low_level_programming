#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - print a string in reverse followed by a new line
 * @s: string to print
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1, j;

	for (j = 0; j < (i / 2); j++)
	{
		char temp;

		temp = s[j];
		s[j] = s[i - j];
		s[i - j] = temp;
	}
}
