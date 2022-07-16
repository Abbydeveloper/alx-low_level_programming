#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: 0 if s1 and s2 are equals
 * else, return a number
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j)
}
