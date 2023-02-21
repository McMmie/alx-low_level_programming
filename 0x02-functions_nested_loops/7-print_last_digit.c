#include "main.h"

/**
 * print_last_digit - print last digit
 * @r: integer argument
 * return: last digit of the number
 */

int print_last_digit(int r)
{
	if (r < 0)
		r *= -1;

	_putchar('0' + (r % 10));

	return (r % 10);
}
