#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	i = 0;
	
	while (*s != '\0')
	{
		for (len = i; len > 0; len--)
		{
		_putchar(*s);
		s--;
		}
		i++;
		s++;
	}
	s--;
	_putchar('\n');
}
