#include <stdio.h>
#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: string to set to
 * @to: string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
