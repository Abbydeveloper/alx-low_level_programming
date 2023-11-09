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
	va_list str_list;
	unsigned int i;
	char *s;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str_list, char *);
		printf("%s", (s == NULL) ? "(nil)" : s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);
}
