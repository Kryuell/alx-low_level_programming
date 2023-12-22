#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key in the hash table
* @ht: The hash table to look into
* @key: The key to search for
*
* Return: The value associated with the key, or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index using the key and hash function */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the computed index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	/* Key not found */
	return (NULL);
}
