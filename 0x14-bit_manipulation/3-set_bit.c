#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given endex
 * @n: a pointer to an unsigned long integer
 * @index: the inex where the bit should be changed
 *
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask <<= index;
	*n |= mask;

	return (1);
}
