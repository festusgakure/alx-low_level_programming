#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: A pointer to the address of the head of the list
 * @index: The index of the node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *val = *head;
	unsigned int node;

	if (val == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(val);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (val->next == NULL)
			return (-1);
		val = val->next;
	}
	temp = val->next;
	val->next = temp->next;
	free(temp);
	return (1);
}
