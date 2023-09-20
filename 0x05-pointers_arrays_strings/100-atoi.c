#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert.
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int length, i;

	length = strlen(s);

	if (length == 0)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		int n = (int)(s[i]);
		printf("%c", n);
	}
	printf("\n");
	return (length);
}

