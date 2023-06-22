#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, j;

	va_list print;

	j = n;

	va_start(print, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < j; i++)
	{
		const int num = va_arg(print, const unsigned int);

		if (i == j - 1)
		{
			printf("%d\n", num);
		}
		else
			printf("%d%s", num, separator);
	}
	va_end(print);
}


