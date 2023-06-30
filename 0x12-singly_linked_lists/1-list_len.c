#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements in a lined list
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *tmp;

	tmp = h;
	if (h)
	{
		count = 0;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			count++;
		}
	}

	return (count);
}
