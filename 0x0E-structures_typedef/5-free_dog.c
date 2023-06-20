#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: struct type to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d->name == NULL)
	{
		return;
	}
	free(d);
}
