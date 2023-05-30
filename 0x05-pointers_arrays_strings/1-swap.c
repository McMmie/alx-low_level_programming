#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second ineger
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
