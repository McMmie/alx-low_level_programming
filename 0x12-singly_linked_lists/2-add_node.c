#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of  a list
 * @head: a pointer to a struct pointer
 * @str: string to be duplicated
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(new->str);

	if (new->str == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (new);
}
