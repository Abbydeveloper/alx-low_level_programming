#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string if successful
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned count1 = 0, count2 = 0, i = 0, j = 0;
	char *p;

	while (s1[count1] != '\0')
		count1++;

	while (s2[count2] != '\0')
		count2++;

	p = malloc(sizeof(char) * (count1 + count2 + 1));

	if (p == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		p[i] = s1[j];
		i++;
		j++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
