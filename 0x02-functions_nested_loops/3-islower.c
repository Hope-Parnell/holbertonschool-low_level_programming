#include "holberton.h"
/**
 * _islower - checks if input is a lowercase letter
 * @c: ascii value of a character
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i;

	if (c <= 122 && c >= 97)
		i = 1;
	else
		i = 0;
	return (i);
}
