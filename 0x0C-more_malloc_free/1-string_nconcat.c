#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to a newly allocated space in memory
 * that contains s1 followed by the first n bytes of s2.
 * or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	p = malloc(i + n + 1);

	if (p == NULL)
		return (NULL);

	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}

	while (l < n)
	{
		p[k] = s2[l];
		k++;
		l++;
	}

	p[i] = '\0';
	return (p);
}
