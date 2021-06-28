#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return:
 */

void jack_bauer(void)
{
	int h = 0;
	int m;
	int h10;
	int h01;
	int m10;
	int m01;

	while (h < 24)
	{
		m = 0;
		h10 = h / 10;
		h01 = h % 10;
		while (m < 60)
		{
			m10 = m / 10;
			m01 = m % 10;
			_putchar(h10 + '0');
			_putchar(h01 + '0');
			_putchar(':');
			_putchar(m10 + '0');
			_putchar(m01 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
