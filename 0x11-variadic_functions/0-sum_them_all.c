#include "variadic_functions.h"

/**
 * sum_them_all - adds numbers
 * @n: number of arguments
 *
 * Return: Sum off all perameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num, sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		sum += num;
	}
	va_end(ap);

	return (sum);
}
