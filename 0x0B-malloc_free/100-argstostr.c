#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all arguments of a program
 * @ac: array count
 * @av: array vector
 *
 * Return: pointer to a new string
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0, j = 0, k = 0, arg_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			arg_len++;
		arg_len++;
	}
	p = malloc(sizeof(char) * (arg_len + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	i = j = 0;
	while (k < arg_len)
	{
		if (av[i][j] == '\0')
		{
			p[k] = '\n';
			i++;
			j = 0;
		}
		if (k < arg_len)
			p[k] = av[i][j];
		j++;
		k++;
	}
	p[k] = '\0';
	return (p);
}
