#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index- insert at given index from a doubly linked list
 * @h: start of doubly linked list
 * @idx: index to insert value
 * @n: value to insert
 * Return: return the node that was inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	temp = *h;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			if (new->next)
				new->next->prev = new;
			new->prev = temp;
			temp->next = new;

			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
