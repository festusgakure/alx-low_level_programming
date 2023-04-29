#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h:pointer to a list
 * Return: Number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t cntr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
