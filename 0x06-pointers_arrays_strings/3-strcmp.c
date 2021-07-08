#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
