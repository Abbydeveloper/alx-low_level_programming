#include <stdio.h>
#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string of lowercase letters
 *
 * Return: string of uppeercase letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
