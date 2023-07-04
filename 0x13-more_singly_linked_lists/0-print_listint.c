#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	const listint_t *tmp;

	if (h)
	{
		tmp = h;

		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
			num++;
		}
	}

	return (num);
}
