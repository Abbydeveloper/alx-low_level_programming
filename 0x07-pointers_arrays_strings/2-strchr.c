#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate character in a string
 * @c: character to locate
 * @s: string to seach
 * Return: pointer to the first occurrence of c
 * or NULL if it is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
