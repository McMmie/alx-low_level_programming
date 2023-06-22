#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator - string btn strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, j = n; 
	va_list args;
	va_start(args, n);

	for(i = 0; i < j; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");

		if (separator != NULL && i < j - 1)
		{
			printf("%s", separator);
		}
	}	
	va_end(args);
	putchar('\n');
}
