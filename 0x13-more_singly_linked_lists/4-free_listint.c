#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to the beginning of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}

