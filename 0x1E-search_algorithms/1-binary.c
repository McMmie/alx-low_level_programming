#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

int binary_search_recursive(int *array, int left, int right, int value);

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

/**
 * binary_search_recursive - searches for a value in a sorted array of
 * integers using the Binary search algorithm (recursive)
 * @array: pointer to the first element of the array to search in
 * @left: the left index of the current search range
 * @right: the right index of the current search range
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */

int binary_search_recursive(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;
	int i = 0;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (binary_search_recursive(array, left, mid - 1, value));

	return (binary_search_recursive(array, mid + 1, right, value));
}
