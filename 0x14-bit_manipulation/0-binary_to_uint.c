#include "main.h"

/**
 * binary_to_uint - converts binary into unsigned integers
 * @b: points to a string of 0 and 1 characters
 *
 * Return: the converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len, res = 0;
	unsigned int power = 1;

	if (b == NULL)
	{
		return (0);
	}


	len = 0;
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			res += 0;
		}
		else if (b[i] == '1')
		{
			res += power;
		}
		else
		{
			return (0);
		}
		power *= 2;
	}
	return (res);
}
