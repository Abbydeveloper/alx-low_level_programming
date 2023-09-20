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
	int length, i, neg_count = 1, n = 0;

	length = strlen(s);

	if (length == 0)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		else if (s[i] == '-')
			neg_count *= -1;
		else
			continue;
	}

	if (!n)
		return (0);
	n *= neg_count;

	return (n);
}

