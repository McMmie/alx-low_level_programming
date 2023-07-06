#include "main.h"

/**
 * get_bit - - returns the value of a bit at a given index
 * @n: a positive number
 * @index: index
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;
	unsigned int max_index;

	max_index = (sizeof(unsigned int) * 8);

	if (index > max_index)
	{
		return (-1);
	}

	bits = ((n >> index) & 1);

	return (bits);
}
