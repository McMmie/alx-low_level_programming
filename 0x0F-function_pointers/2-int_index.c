#include "function_pointers.h"

/**
 * int_index - seaches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: 0 on success else  otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	cmp(array[size]);
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (cmp(array[i]) > 0)
	{
		return (i);
	}
	i++;
	return (i);
}
