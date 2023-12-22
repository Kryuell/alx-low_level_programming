#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add/update the key/value pair
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Get the index using the key and hash function */
    index = key_index((unsigned char *)key, ht->size);

    /* Check for collision: Add the new node at the beginning of the list */
    current = ht->array[index];
    while (current != NULL)
    {
        /* Update value if key already exists */
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    /* Set values for the new node */
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
