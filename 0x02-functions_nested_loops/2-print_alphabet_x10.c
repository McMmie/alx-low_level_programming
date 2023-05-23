#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		_putchar('\n');
		i++;
	}
}
