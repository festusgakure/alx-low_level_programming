#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t ctr = 0;

	while (node)
	{
		ctr++;
		node = node->next;
	}
	return (ctr);
}
