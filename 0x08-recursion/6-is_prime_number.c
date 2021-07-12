#include "holberton.h"

/**
 * _prime - finds prime numbers
 * @n: number being found
 * @p: number being checked
 *
 * Return: 1 if prime 0 if not
 */

int _prime(int n, int p)
{
	if (p == n)
		return (1);
	else if (n % p == 0)
		return (0);

	return (_prime(n, p + 2));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n != 2 && n % 2 == 0)
		return (0);

	return (_prime(n, 3));

}
