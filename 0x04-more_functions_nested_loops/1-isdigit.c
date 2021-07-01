#include "holberton.h"
/**
 * _isdigit - checks if input character is a digit
 * @c: the ascii value of the inputted character
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
