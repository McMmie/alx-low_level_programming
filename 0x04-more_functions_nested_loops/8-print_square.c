#include "main.h"

/**
 * priint square - a function that prints a square
 * size: size of the square 
 * Return: void
 */

void print_square(int size)
{
	/*int width = 0;*/

	while (size > 0)
	{
		while (size > 0)
		{
			_putchar('#');
			size--;
		}
		if(size <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
		_putchar('#');
		size--;
	}
	_putchar('\n');
}
