#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints the binary represantation of a number
 * @n: an unsigned long integer
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned int tmp = n;
	char digit;

	if (n == 0)
	{
		_putchar('0');
	}

	while (tmp > 0)
	{
		tmp >>= 1;
		i++;
	}

	while (i > 0)
	{
		digit = ((n >> (i - 1)) & 1) + '0';
		_putchar(digit);
		i--;
	}
}
