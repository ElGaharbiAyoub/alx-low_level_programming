#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head address i think
 * @str: needs to be duplicated
 * Return: returns an address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *newstr = strdup(str);
	int i = 0;


	if (!newstr)
		return (NULL);

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(newstr);
		return (NULL);
	}
	new->str = newstr;
	new->len = i;
	new->next = *head;

	*head = new;
	return (new);
}
