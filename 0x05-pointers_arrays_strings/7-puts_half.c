#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, start;
	len = strlen(str);
	start = (len / 2);

		while (start < len)
		{
			if ((len % 2) != 0)
			{
				start = (len - 1) / 2;
			}
			_putchar(*(str + start));
			start++;
		}
	_putchar('\n');
}
