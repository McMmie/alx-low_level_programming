#include "main.h"

/**
 * string_toupper -change to uppercase letters
 * @c: characters
 *
 * Return: character
 */

char *string_toupper(char *c)
{
	char *ptr;
	 ptr = c;

	while (*c)
	{
		while (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 'a' + 'A';
		}
		c++;	
	}
	return (ptr);
}
