#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - count all the elements of a dlistint_t list
 * @head: beginning of doubly linked list
 * Return: return the sum of all data if list is empty return 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
