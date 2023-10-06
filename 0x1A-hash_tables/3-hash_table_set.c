#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 is succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp2;

	if (strlen(key) == 0 || ht == NULL || ht->array == NULL ||
			ht->size == 0 || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
		return (1);
	}
	else
	{
		tmp2 = malloc(sizeof(hash_node_t));
		tmp2->key = strdup(key);
		tmp2->value = strdup(value);
		tmp2->next = ht->array[index];
		ht->array[index] = tmp2;
		return (1);
	}
}
