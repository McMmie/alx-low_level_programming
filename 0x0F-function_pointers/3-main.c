#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - checks code
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	j = atoi(argv[2]);
	k = atoi(argv[4]);

	if (argc != 4)
	{
		return (1);
	}
	if (*argv[argc] != '\0')
	{
		i = get_op_func(argv[3])(j, k);
	}

	return (i);
}
