#include "holberton.h"
/**
 * _isupper - checks if input character is uppercase
 * @c: the inputted character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return(0);
}
