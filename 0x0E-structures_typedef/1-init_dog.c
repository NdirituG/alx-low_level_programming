#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes a variable of struct
 * @d: Dog Struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
