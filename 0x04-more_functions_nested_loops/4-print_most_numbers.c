#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if ((num != 50) && (num != 52))
		{
		_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
