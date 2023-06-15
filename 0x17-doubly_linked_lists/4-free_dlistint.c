#include "lists.h"
#include <stdlib.h>

/**
 * free_dnodeint - frees a dlistint_t list
 * @head: beginning of dlistint_t
 * Return: address of the new element or NULL if it failed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
