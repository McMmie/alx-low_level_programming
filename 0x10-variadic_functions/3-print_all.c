#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	const char *ptr  = format;

	va_list arg; /*declaring the list of arguments*/

	va_start(arg, format); /*initialization*/

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			char val = va_arg(arg, int);
		       printf("%c, ", val);
		}
		else if (*ptr == 'i')
		{
			int val = va_arg(arg, int);
			printf("%d, ", val);
		}
		else if (*ptr == 'f')
		{
			double val = va_arg(arg, double);
			printf("%f, ", val);
		}
		else if (*ptr == 's')
		{
			char *val = va_arg(arg, char *);

			if (val == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s ", val);
		}
		ptr++;
	}
	va_end(arg);

	putchar('\n');
}
