#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to new string, NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *ptr;

	for (size1 = 0; s1[size1] != 0; size1++)
	{}
	for (size2 = 0; s2[size2] != 0; size2++)
	{}
	ptr = malloc(sizeof(char) * (size1 + size2));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= size2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
