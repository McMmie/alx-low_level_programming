#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: points to the valie to be changed
 * @index: the index to be changed
 *
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = ~(mask << index);
	*n &= mask;

	return (1);
}
