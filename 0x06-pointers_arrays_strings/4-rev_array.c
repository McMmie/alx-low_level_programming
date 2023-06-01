#include "main.h"
/*#include <stdio.h>*/

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	if (i < n)
	{
		j = n - 1;
			while (j >= i)
			{
				a[i] = a[j];
				i++;
				j--;
			}
			a[i] = a[i];
			i++;
	}
}
