#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		(h->str == NULL) ?
			printf("[0] (nil)\n") : printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
