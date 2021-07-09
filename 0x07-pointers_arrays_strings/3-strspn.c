#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string to check against
 *
 * Return: count(i)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, test;
	unsigned int cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				test = 1;
				cnt++;
				break;
			}
		}
		if (test == 0 && cnt > 0)
			return (cnt);
	}

	return (0);
}
