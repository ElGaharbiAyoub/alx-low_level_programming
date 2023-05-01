#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the start of the linked list
 * @n: value to add to node
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL && head)
	{
		*head = new;
		return (new);
	}

	for (end = *head; end->next != NULL; end = end->next)
		;

	end->next = new;
	return (new);
}

