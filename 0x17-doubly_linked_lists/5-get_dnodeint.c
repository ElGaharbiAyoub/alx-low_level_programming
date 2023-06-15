#include "lists.h"
#include <stdlib.h>
/**
  * get_dnodeint_at_index - get node at a given index from a doubly linked list
  * @head: start of doubly linked list
  * @index: index to return value
  * Return: return the nth node at a given index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
