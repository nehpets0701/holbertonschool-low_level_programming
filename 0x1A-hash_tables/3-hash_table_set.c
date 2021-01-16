#include "hash_tables.h"

/**
 * hash_table_set-adds element to hash table
 * Return: 1 for success, 0 for failure
 * @ht: input hash table
 * @key: key to add
 * @value: value to add with said key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i = 0;
	hash_node_t *new, *current;

	if (ht == NULL || key == NULL || ht->size == 0 || ht->array == NULL ||
		key[0] == '\0')
		return (0);
	i = hash_djb2((unsigned char *)key) % ht->size;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[i] == NULL)
		ht->array[i] = new;
	else
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}

			current = current->next;
		}
		new->next = ht->array[i];
		ht->array[i] = new;
	}
	return (1);
}
