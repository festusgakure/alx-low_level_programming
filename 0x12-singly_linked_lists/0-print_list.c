#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a node of list_t
 *
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t cntr = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		cntr++;
		h = h->next;
	}
	return (cntr);
}
