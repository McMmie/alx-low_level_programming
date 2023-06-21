#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: an array
 * @size: size of array
 * @action: a function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
