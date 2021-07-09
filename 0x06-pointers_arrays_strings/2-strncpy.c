#include "holberton.h"

/**
 * _strncpy - copies a n characters of a string
 * @dest: pointer to destination string
 * @src: pointer to original string
 * @n: number of characters to copy
 *
 * Return: pointer to start of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (src == "\0")
		*dest = *src;

	return (ret);
}
