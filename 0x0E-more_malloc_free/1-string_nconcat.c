#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings to the nth char of s2
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of characters to add from s2
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}
	if (n >= size2)
		n = size2;

	ptr = malloc(sizeof(char) * (size1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
