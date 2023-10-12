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
	unsigned int i = 0;

	while (str[i] != 0)
		i++;

	if (i <= 0 || str == NULL)
		return ('\0');

	p = (char *)malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	return (p);
}
