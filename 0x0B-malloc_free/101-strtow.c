#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - print a pointer to an array of strings
 * @str: string to split into words
 *
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
		if (str[chr] != ' ' && (str[chr + 1] == ' ' ||
				str[chr + 1] == '\0'))
		{
			height++;
		}
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
			{
				j++;
			}
			if ((str[chr + 1] == ' ' || str[chr + 1] == '\0') && str[chr] != ' ')
			{
				p[i] = malloc((chr - j + 2) * sizeof(char));
				if (p[i] == NULL)
				{
					if (p != NULL && i != 0)
					{
						for (; i > 0; i--)
							free(p[i]);
						free(p[i]);
						free(p);
					}
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
