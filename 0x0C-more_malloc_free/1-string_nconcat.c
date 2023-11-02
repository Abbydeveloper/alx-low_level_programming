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
	unsigned int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	p = malloc((i + n + 1));

	if (p == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		p[k] = s1[k];

	for (l = 0; n > 0 && s2[l] != '\0'; l++)
	{
		p[k] = s2[l];
		k++;
		n--;
	}

	p[k] = '\0';
	return (p);
}
