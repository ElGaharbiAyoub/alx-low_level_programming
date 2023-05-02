#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the beginning of linked list
 * @index: index to be deleted
 * Return: 1 if succesful -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *dlt;
	unsigned int i;

	if (!*head)
		return (-1);

	tmp = *head;

	if (!index)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		for (i = 0; tmp && i != index - 1; i++)
			tmp = tmp->next;

		if (i == index - 1)
		{
			dlt = tmp->next;
			tmp->next = tmp->next->next;
			free(dlt);
			return (1);
		}
		return (-1);
	}

}

