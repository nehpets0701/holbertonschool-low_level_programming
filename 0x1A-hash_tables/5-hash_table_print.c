#include "hash_tables.h"

/**
 * hash_table_print-print hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	count = 0;
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			count += 1;
		}
	}
	printf("}\n");
}
