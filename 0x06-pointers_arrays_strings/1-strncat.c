#include "holberton.h"

/**
 * _strncat - combines strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of characters from src to cat
 *
 * Return: pointer to the start of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n - 1; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	if (n != 0)
		*dest = *src;
	return (ret);
}
