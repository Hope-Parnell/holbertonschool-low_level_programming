#include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase in a string
 * @s: pointer to string
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		i++;
	}

	return (s);
}
