#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list
 * @head: points to  a list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;

	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
