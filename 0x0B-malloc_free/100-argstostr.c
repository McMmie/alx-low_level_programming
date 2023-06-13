#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the aguments
 * @ac: no of arguments
 * @av: array of arguments
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *arr **s;
	int i;

	arr = malloc(sizeof(char) * ac);
		for (i = 0; i < ac; i++)
		{
			s[i] = av[i];
		}
		free(arr);
	return (arr);
}

