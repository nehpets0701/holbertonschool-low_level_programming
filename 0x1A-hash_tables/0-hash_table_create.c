#include "hash_tables.h"

/**
 * hash_table_create-creates a hash table
 * Return: pointer to new hash table
 * @size: size of array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hashtable = NULL;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	hashtable->size = size;

	return (hashtable);
}
