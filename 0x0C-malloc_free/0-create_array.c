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
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (prt == NULL)
		return (NULL);
	ptr[0] = c;

	return (ptr);
}
