#include <stddef.h>
#include "holberton.h"

/**
 * _strchr - serches a string for a character
 * @s: pointer to the string
 * @c: character to search for
 *
 * Return: pointer to first occurance of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
