#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: points to the list to be freed
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}
