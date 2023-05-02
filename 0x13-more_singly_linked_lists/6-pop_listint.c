#include "lists.h"

/**
 * pop_listint - deleted the head node of a linked list
 * @head: double pointer to the linked list start
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (head && *head)
	{
		n = (**head).n;
		hold = *head;
		*head = (**head).next;
		free(hold);
		return (n);
	}
	return (0);
}
