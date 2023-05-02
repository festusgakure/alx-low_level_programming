#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - Returns number of elements in linked listint_t list
 * @h: Pointer to the linked list
 * Return: Number of nodes in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		cntr++;
		h = h->next;
	}
	return (cntr);
}
