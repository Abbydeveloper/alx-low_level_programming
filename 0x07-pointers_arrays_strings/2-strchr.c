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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
