#include <stdio.h>
#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to search through
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring
 * NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0; int j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j] &&
				needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}
