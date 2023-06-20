#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: It creates a new struct that contains
 * information about a dog, its age and its owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
