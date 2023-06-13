#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: the width of the array(row)
 * @height: height of the array(column)
 *
 * Return: zero on succes and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(int *) * (height));

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		printf("memory not allocated\n");
		return (NULL);
	}
	return (arr);
}
