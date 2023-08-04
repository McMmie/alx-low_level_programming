#include "main.h"

/**
 * flip_bits - returns the number of bits to be fliped btn numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bites fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int flips;

	result = n ^ m;

	flips = 0;
	while (result != 0)
	{
		flips += result & 1;
		result >>= 1;
	}

	return (flips);
}
