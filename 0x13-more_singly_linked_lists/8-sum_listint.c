#include "lists.h"

/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: start of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int i = 0, sum = 0;

	while (head)
	{
		sum += (*head).n;
		head = head->next;
		i++;
	}
	return (sum);
}
