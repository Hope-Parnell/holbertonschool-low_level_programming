#include "holberton.h"

/**
 * leet - changes a string to 1337 speak
 * @s: pointer to string
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j, k;

	char leet[] = {'4', '3', '0', '7', '1'};
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l[k] || s[i] == l[k + 1])
			{
				s[i] = leet[j];
			}
			k += 2;
		}
	}
	return (s);
}
