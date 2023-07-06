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
	int i, j, array[32];
	char digit;

	if (n == 0)
	{
		_putchar('0');
	}

	i = 0;
	while (n > 0)
	{
		array[i] = n & 1;
		i++;
		n >>= 1;
	}

	for (j = i - 1; j >= 0; j--)
	{
		digit = '0' + array[j];
		_putchar(digit);
	}
}
