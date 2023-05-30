#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
