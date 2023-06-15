#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}

		return (i);
}

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of elements concatenated
 *
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int a, b, c, i = _strlen(s1);
	c = n;

	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < c; b++)
	{
		ptr[a + b] = s2[b];
	}
	ptr[a + b] = '\0';
	return (ptr);
}
