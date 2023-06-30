#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to a struct pointer
 * @str: string
 *
 * Return: addres of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(new->str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}
		return (new);
}
