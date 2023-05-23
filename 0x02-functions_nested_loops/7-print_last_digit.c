#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: to be assigned the integer
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int mod;

	if (n > 9)
	{
		mod = n % 10;
		_putchar(mod);
	}
	else
		return (n);
	return (0);
}
