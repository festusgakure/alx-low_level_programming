#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a dlistint_t list
 * @head: pointer to first element of the list
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new_node->prev = aux;
		aux->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
