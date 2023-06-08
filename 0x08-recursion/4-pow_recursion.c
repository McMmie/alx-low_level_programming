#include "main.h"

/**
 * _pow_recursion - returns the power of two ints
 * @x: base int
 * @y: power int
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (_pow_recursion(x, (y - 1)) * x);
}
