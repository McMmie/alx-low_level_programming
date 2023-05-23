#include "main.h"

/**
 * _abs - computes tha absolute value of an integer
 * @n: parameter passed by function
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-n);
	}
	return (n);
}
