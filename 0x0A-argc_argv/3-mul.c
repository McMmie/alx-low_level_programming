#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
		printf("Error\n");
	return (0);
}
