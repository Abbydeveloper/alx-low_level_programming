#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and intitialize
 * it with a specific char
 * @size: size of array to create
 * @c: charater to initialize with
 *
 * Return: pointer to the array if successful
 * NULL if it fails or if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return ('\0');

	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
