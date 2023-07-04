#include "lists.h"

/**
 * get_nodeint_at_index - gets a particular node from a list
 * @head: points to a singly linked list
 * @index: index of the node
 *
 * Return: value of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	i = 0;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}

	return (tmp);
}
