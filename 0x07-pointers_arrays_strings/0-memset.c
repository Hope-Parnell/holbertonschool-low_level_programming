#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the first memory location
 * @b: character to place in memory
 * @n: number of bytes to fill with b
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
