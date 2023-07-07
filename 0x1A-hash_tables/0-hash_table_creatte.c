#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table with a given size .
 * @size: The size of the hash table.
 *
 * Return: Pointer to the newly created hash table, or NULL if failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int x;

	if (!size)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		new_table->array[x] = NULL;

	return (new_table);
}
