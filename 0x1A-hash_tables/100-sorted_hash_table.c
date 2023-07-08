#include "hash_tables.h"
#include <stdio.h>

/**
 * shash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	if (!size)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * update_val - Updates the value of a key in a hash table.
 * @head: Pointer to the head of the linked list.
 * @key: The key to search for in the hash table.
 * @value: The new value to update.
 *
 * Return: 1 on success, 0 on failure.
 */
int update_val(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *cp = *head;
	char *newValue;

	while (cp)
	{
		if (strcmp(cp->key, key) == 0)
		{
			newValue = strdup(value);
			if (!cp->value)
				return (-1);
			free(cp->value);
			cp->value = newValue;
			return (1);/* Return 1 to indicate success (value updated) */
		}
		cp = cp->next;
	}
	return (0);/* Return 0 to indicate failure (key not found) */
}

/**
 * add_node - Adds a new node to a hash table.
 * @head: Pointer to the head of the linked list.
 * @key: The key of the new node.
 * @value: The value of the new node.
 *
 * Return: Pointer to the newly added node, or NULL on failure.
 */
shash_node_t *add_node(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new;
	char *newKey, *newValue;


	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);

	newKey = strdup(key);
	if (!newKey)
	{
		free(new);
		return (NULL);
	}
	newValue = strdup(value);
	if (!newValue)
	{
		free(new);
		free(newKey);
		return (NULL);
	}

	new->key = newKey;
	new->value = newValue;
	new->next = *head;

	*head = new;
	return (*head);
}

/**
 * shash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key of the key-value pair.
 * @value: The value of the key-value pair.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	shash_node_t *new;
	unsigned long int index;
	int isUpdate;

	if (!ht || !ht->size || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	isUpdate = update_val(&(ht->array[index]), key, value);
	if (isUpdate == 0)/* If the key doesn't exist in the linked list */
	{
		/* Add a new node with the key-value pair */
		new = add_node(&(ht->array[index]), key, value);
		if (!new)
			return (0);

		ht->array[index] = new;
	}
	else if (isUpdate == -1)/* If memory allocation for value update failed */
		return (0);
	return (1);
}
