#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arrays
 * @size: the number of characters
 * @c: array of characters
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
