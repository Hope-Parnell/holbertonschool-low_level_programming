#include<stdio.h>
/**
 * main - prints 0-9 using their ascii values separated by commas
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
