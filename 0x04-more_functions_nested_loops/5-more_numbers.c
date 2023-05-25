#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, m, a, b;

	n = 0;

	while (n <= 10)
	{
		m = 48; a = 'O'; b = 'I';

		while (m <= (a + b))
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
