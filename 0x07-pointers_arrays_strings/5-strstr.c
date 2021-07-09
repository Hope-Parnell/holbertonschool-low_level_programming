#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to search for
 *
 * Return: pointer to begining of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *r;

	for (r = haystack; *r != '\0'; r++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (r[i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (r);
	}
	
	return ('\0');
}
