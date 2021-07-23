#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and inits it to 0
 * @nmemb: number of elements
 * @size: memory size of each element
 * 
 * Return: pointer to allocated string, NULL upon failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
