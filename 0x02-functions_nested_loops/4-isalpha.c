#include "main.h"


/**
 * _isalpha -check alphabet character
 * @c: character to check
 * Return : 1 if c is a letter, lowercase or uppercase
 * otherwise Return : 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
