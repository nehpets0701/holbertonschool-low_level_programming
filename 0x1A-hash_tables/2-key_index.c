#include "hash_tables.h"

/**
 * key_index-gets index of a key
 * Return: index of key
 * @key:key to find index of
 * @size: size of the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
