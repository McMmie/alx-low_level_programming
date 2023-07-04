#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to a pointer
 * @index: index of the node to be deleted
 *
 * @Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *nxt;

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}


	tmp = *head;

	i = 0;
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);


	nxt = tmp->next;
	tmp->next = nxt->next;

	free(nxt);

	return (1);
}

