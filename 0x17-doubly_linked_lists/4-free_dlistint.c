#include "lists.h"

/**
 * free_dlistint - frees a  list.
 * @head: pointer to the list.
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}

	free(current);
}
