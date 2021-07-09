#include "holberton.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer to destination string
 * @src: source to be copied
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
