#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: type member one
 * @age: type member two
 * @owner: third type member
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d))
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
