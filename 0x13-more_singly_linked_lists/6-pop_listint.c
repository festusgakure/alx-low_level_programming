#include <string.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to pointer to head node of the list
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!*head)
	{
		return (0);
	}

	temp = *head;
	val = temp->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}
