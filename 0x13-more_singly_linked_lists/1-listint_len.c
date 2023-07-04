#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to a list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	const listint_t *tmp;

	if (h)
	{
		tmp = h;

		while (tmp != NULL)
		{
			tmp = tmp->next;
			num++;
		}
	}

	return (num);
}
