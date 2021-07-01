#include "holberton.h"
/**
 * _isupper - checks if input character is a digit
 * @c: the ascii value of the inputted character
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
