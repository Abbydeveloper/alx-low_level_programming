#include <stdio.h>
#include "main.h"

/**
 * strpbrk - search a string for any of a set of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: a pointer to the byte in s that matches
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		j = 0;
		i++;

	}
	return ('\0');
}
