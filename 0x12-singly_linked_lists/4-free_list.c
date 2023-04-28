#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
