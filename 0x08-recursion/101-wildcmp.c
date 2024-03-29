#include <stdio.h>
#include "main.h"

/**
 * wildcmp - check if strings are identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if s1 is identical s2
 * 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	else if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
