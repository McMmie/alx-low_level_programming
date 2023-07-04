#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: points to a list pointer
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		n = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (n);
}
