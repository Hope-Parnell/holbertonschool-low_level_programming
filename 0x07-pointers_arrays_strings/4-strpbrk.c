#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search in
 * @accept: bytes to look for
 *
 * Return: pointer to the first occurance of a character from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	return (NULL);
}
