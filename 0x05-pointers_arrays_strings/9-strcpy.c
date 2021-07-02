#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: the destination of the copy
 * @src: string to be copied
 *
 * Return: pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
