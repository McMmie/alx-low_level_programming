#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to a list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
