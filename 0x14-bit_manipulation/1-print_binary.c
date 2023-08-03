#include "main.h"

/**
 * print_binary - prints the binary represantation of a number
 * @n: an unsigned long integer
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}

		i--;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
