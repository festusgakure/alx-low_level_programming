#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
