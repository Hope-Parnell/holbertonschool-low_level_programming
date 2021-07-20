#include <stdlib.h>

/**
 * create_array - creates an array of chars starting with a specific char
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: pointer to the array, NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
