#include <stdlib.h>

/**
 * _strdup - copies string to allocated memory
 * @str: pointer to a string
 *
 * Return: pointer to copied string, NULL if str is NULL or malloc error
 */

char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	{}
	size++;
	ptr = malloc(sizeof(char) * (size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size, i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
