#include "holberton.h"

/**
 * cap_string - capitalizes each word in a string
 * @s: pointer to the string
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', 9, ' '};

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 14; j++)
			{
				if (i == 0 || (s[i-1] == sep[j]))
				{
					s[i] -= 32;
				}
			}
		}
		i++;
	}

	return (s);
}
