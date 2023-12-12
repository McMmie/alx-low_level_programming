#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	/* size_t i;
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;
*/
	if (array == NULL)
		return (-1);

	return binary_search_recursive(array, 0, size - 1, value);

/*
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("Searching in array: %d\n", array[i]);
		else
			printf("Searching in array: %d,", array[i]);
	}
	
	if (value == array[mid])
		return mid;
	
	if (array[mid] > value)
		return (binary_search(array, mid - 1, value));
	else
		return (binary_search(array, mid + 1, value));


	return (-1);
*/
}
