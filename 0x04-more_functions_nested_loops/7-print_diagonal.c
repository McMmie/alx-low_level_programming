#include "main.h"

/**
 *  * print_line - draws a straight line
 *   * @n: number of times _ will be printed
 *    *
 *     * Return: void
 *      */

void print_diagonal(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		--n;
	}
	_putchar('\n');
}
