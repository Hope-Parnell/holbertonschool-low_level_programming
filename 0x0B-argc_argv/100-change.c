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
	while (change != 0)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change--;
		coins++;
	}
	printf("%d\n", coins);

	return (0);
}
