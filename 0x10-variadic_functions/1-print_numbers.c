#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: string to be printed between numbers
 * @n: number of intgers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
