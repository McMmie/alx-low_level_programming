#include "main.h"

/**
 * strlen_count -counts length of a string
 * @s: string
 *
 * Return: 1 if string  is not null and 0 if string is null
 */

int strlen_count(char *s)
{
	if (*s != '\0')
		return (1);
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;

	count = strlen_count(s);
	if (count <= 0)
		return (0);
	return (count + _strlen_recursion(s + 1));
}
