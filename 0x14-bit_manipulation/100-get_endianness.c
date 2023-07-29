#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	int n = 0x00000001;

	char *s = (char *)&n;

	return (s[0]);
}
