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

	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));

}
