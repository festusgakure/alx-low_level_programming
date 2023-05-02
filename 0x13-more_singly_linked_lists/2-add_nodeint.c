#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at the beginning of the list
 * @head: Pointer to the listint_t list
 * @n: New node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
