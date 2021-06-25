#include<stdio.h>
/**
 * main - prints the lowercase alphabet one letter per line
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
