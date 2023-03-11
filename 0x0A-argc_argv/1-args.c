#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int num = 0;
	int count = argc - 1;

	if (argc > num)
		printf("%d\n", count);

	return (0);
}

