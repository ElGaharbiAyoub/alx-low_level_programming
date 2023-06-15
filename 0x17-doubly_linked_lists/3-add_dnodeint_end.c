#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node to the end of a dlistint_t list
 * @head: beginning of dlistint_t
 * @n: Value to insert into node
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	tp = *head;

	if (tp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = new;
		new->prev = tp;
	}

	return (new);
}
