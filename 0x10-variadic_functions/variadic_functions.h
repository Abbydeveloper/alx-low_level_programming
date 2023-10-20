#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prints - Struct op
 *
 * @fmt: The format char
 * @f: associated function pointer
 */

typedef struct prints
{
	char *fmt;
	void (*f)(va_list a);
} prints_t;

#endif
