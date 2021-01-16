#include "hash_tables.h"

/**
 * hash_table_get-retrieve value from hash table
 * Return: value from that element
 * @ht:input
 * @key:key to get
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (key == NULL || !(*key) || ht == NULL)
		return (NULL);

	node = ht->array[hash_djb2((unsigned char *)key) % ht->size];
	while (node != NULL)
	{
		if (strcmp(node->key, (char *)key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
