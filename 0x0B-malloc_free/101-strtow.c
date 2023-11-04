#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _free_inner_array(char **pointer, unsigned int size);

/**
 * strtow - print a pointer to an array of strings
 * @str: string to split into words
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	char **p;
	unsigned int chr, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (chr = height = 0; str[chr] != '\0'; chr++)
	{
		if (str[chr] != ' ' && (str[chr + 1] == ' ' || str[chr + 1] == '\0'))
			height++;
	}
	p = malloc(sizeof(char *) * (height + 1));
	if (p == NULL || height == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = j = 0; i < height; i++)
	{
		for (chr = j; str[chr] != '\0'; chr++)
		{
			if (str[chr] == ' ')
				j++;
			if ((str[chr + 1] == ' ' || str[chr + 1] == '\0') && str[chr] != ' ')
			{
				p[i] = malloc((chr - j + 2) * sizeof(char));
				if (p[i] == NULL)
				{
					_free_inner_array(p, i);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; j <= chr; j++, k++)
			p[i][k] = str[j];
		p[i][k] = '\0';
	}
	p[i] = NULL;
	return (p);
}

/**
 * _free_inner_array - free up inner parts of a two-dimensional array
 * @pointer: pointer to array
 * @size: size
 */

void _free_inner_array(char **pointer, unsigned int size)
{
	if (pointer != NULL && size != 0)
	{
		for (; size > 0; size--)
			free(pointer[size]);
		free(pointer[size]);
		free(pointer);
	}
}
