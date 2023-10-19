#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", (va_arg(strings, char *) == NULL) ? "(nil)" : va_arg(strings, char *));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
