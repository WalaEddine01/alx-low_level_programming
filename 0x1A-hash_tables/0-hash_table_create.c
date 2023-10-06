#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: returns the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	return (ht);
}
