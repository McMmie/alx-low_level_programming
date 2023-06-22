#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

struct print 
{
	char alpha;
	void (*func)(va_list);
};

void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void _int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void _double(va_list args)
{
	printf("%f", va_arg(args, double));
}
void _string(va_list args)
{
	char *val = va_arg(args, char *);
	if (val == NULL)
	{
		printf("(nil)");
	}
	printf("%s", val);
}


/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return:nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list args;

	struct print type[] = { {'c', _char},
			{'i', _int},
			  {'f', _double},
			  {'s', _string},
			{'\0', NULL} };

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (type[j].alpha != '\0')
		{
			if (format[i] == type[j].alpha)
			{
				printf("%s", separator);
				type[j].func(args);
				separator = ", ";
				break;
			 }
			j++;
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
