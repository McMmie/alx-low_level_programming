#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: positive integer
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	long int *s;

	s = malloc(b * sizeof(long int));
	if (s == NULL)
	{
		free(s);
		exit(98);
	}
	free(s);
	return ((void *)s);
}
