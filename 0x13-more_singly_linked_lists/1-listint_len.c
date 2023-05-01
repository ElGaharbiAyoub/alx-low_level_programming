#include "lists.h"

/**
 * listint_len - return the number of elements in a list
 * @h: node
 * Return: count of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
