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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	p = malloc(sizeof(char) * ac);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		p[i] = av[i + 1];
	p[i] = '\0';
	return (p);
}
