#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocate space in memory
 * @str: string to be duplicated
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, n  = strlen(str);

	if (*str)
	{
		ptr = (char *)malloc(n * sizeof(char));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	i  = 0;
	while (i < n)
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	return (ptr);
}
