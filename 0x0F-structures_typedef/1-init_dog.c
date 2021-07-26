#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: pointer to location of the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: name of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
