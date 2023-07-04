#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning
 * @head: pointer to a pointer
 * @n: integer
 *
 * Return: the added list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
	}

	new->n = n;

	if (new->n == '\0')
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (new);
}
