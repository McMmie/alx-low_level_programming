#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: parameter to be passed
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		while (n > 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			printf("%d, ", n);
			n--;
		}
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
