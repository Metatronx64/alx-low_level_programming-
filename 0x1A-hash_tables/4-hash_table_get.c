#include "hash_tables.h"

/**
 * hash_table_get - Gets an element from a hash table.
 * @ht: Pointer to the hash table.
 * @key: The string key.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

