#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: points to a singly linked list
 * @idx: index where thenode should be added
 * @n: value to be added
 *
 * Return: address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
		new->next = NULL;
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}

		tmp = *head;
		while (i < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}

		new->next = tmp->next;
		tmp->next = new;
	return (new);
}
