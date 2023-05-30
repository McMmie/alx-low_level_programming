#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: characters printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int len;

	len = strlen(str);
	while (*str != '\0')
	{
		len = strlen(str);

		if ((len % 2) == 0)
		{
			_putchar(*str);
			len++;
		}
		str++;
	}
	_putchar('\n');
}

