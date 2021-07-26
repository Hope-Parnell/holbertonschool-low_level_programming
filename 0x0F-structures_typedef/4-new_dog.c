#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: Pointer to the newly created struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;

	return (new);
}

/**
 * _strdup - copies string to allocated memory
 * @str: pointer to a string
 *
 * Return: pointer to copied string, NULL if str is NULL or malloc error
 */

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	{}
	size++;
	ptr = malloc(sizeof(char) * (size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
