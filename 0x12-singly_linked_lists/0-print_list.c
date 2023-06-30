#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a struct list
 * @h: pointer to a list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *tmp;

	tmp = h;
	if (h == NULL)
	{
		return (0);
	}
	counter = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
