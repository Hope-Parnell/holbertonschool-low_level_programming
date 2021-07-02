#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return:
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char store;

	while (s[i] != 0)
	{
		i++;
	}
	for (i-- ; i > j ; i--)
	{
		store = s[i];
		s[i] = s[j];
		s[j] = store;
		j++;
	}
}
