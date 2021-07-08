#include "holberton.h"

/**
 * _strcat - combines strings
 * @dest: pointer to first string
 * @src: pointer to second string
 *
 * Return: pointer to the start of dest
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ret);
}
