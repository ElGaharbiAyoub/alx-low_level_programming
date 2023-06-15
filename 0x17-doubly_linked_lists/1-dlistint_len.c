#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: doubly linked list node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
