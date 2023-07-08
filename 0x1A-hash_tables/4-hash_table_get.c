#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: Pointer to the value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		/* Compare the current node's key with the provided key */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);

}
