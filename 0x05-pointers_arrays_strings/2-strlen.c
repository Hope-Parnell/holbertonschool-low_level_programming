#include "holberton.h"

/**
 * _strlen - counts how many characters are in a string
 * @s: pointer to the string
 *
 * Return: count
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
