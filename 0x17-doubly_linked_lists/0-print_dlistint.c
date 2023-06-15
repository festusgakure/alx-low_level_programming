#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Pointer to the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t ctr = 0;

	while (node)
	{
		printf("%i\n", node->n);
		ctr++;
		node = node->next;
	}
	return (ctr);
}
