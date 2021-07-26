#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a dog
 * @d: pointer to location of the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: name of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	if (name == NULL)
		d->name = NULL;
	else
		d->name = name;
	d->age = age;
	if (owner == NULL)
		d->owner = NULL;
	else
		d->owner = owner;
}
