#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: member
 * @age: member
 * @char: member
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s = malloc(sizeof(s));
		s->name = name;
		s->age = age;
		s->owner = owner;
	if (!(s))
	{
		return (NULL);
	}
	return (s);
	free(s);
}
