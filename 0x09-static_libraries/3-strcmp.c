#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if the strings are equal
 * less than 0 if s1 compares less to s2
 * greater than 0 if s2 compares less to s1
 */

int _strcmp(char *s1, char *s2)
{
	int diff, i = 0, j = 0, n;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (i > j)
		n = j;
	else
		n = i;

	for (i = 0; i < n; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}
	return (diff);
}
