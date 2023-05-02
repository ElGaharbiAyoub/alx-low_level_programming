#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to the start of linked list
 * @index: index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = (*head).next;
	}
	return (NULL);
}
