#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		_putchar('0');
		_putchar('\n');
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
