#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to allocated space in memory that
 * contains a copy of the string given as a parameter
 * @str: string to check for
 *
 * Return: pointer to duplicated string
 * NULL if str is NULL or memory is insufficient
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int counter = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[counter] != 0)
		counter++;

	p = malloc((sizeof(char) * counter) + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i <= counter; i++)
		p[i] = str[i];

	return (p);
}
