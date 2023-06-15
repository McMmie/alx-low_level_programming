#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min:
 * @max:
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, m = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * m);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
