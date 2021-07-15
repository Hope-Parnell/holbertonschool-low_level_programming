#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the min number of coins to make change
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 0 if exactly 1 argument is passed, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 1)
	{
		printf("0\n");
		return (0);
	}
	while (change > 0)
	{
		while (change / 25 > 0)
		{
			change -= 25;
			coins++;
		}
		while (change / 10 > 0)
		{
			change -= 10;
			coins++;
		}
		while (change / 2 > 0)
		{
			change -= 2;
			coins++;
		}
		change--;
		coins++;
	}
	printf("%d\n", coins);

	return (0);
}
