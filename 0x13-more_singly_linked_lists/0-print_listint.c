#include "lists.h"

/**
 * print_listint - print nodes
 * @h: node
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
