#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);
	change = 0;

	change += (i / 25);
	i = i % 25;
	change += (i / 10);
	i = i % 10;
	change += (i / 5);
	i = i % 5;
	change += (i / 2);
	i = i % 2;
	change += (i / 1);

	printf("%d\n", change);
	return (0);
}
