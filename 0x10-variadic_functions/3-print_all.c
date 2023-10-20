#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char - print only char
 * @s: char to print
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_integer - print only integer
 * @i: int to print
 */
void print_integer(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_float - print only float
 * @f: float to print
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_string - print only string
 * @str: string to print
 */
void print_string(va_list a)
{
	char *str;

	str = va_arg(a, char *);

	if (str != NULL)
		printf("%s", str);
	else
	{
		printf("(nil)");
		return;
	}
}

/**
 * print_all - print anything
 * @format: format of arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0, j = 0;
	prints_t prints[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};
	int prints_len = 4;

	va_start(arg_list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < prints_len)
       		{
			if (*(format + i) == *(prints[j].fmt))
			{
				prints[j].f(arg_list);
				if (j < prints_len - 1)
					printf(", ");
			}
                	j++;
		}

		i++;	
	}
	printf("\n");
	va_end(arg_list);
}
