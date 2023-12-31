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

	if (strlen(key) == 0 || ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmp2 = malloc(sizeof(hash_node_t));
	if (tmp2 == NULL)
		return (0);
	tmp2->key = strdup(key);
	if (tmp2->key == NULL)
	{
		return (0);
	}
	tmp2->value = strdup(value);
	if (tmp2->value == NULL)
		return (0);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, tmp2->key) == 0)
			tmp2->next = NULL;
		else
			tmp2->next = ht->array[index];
	}
	else
		tmp2->next = NULL;
	ht->array[index] = tmp2;
	return (1);
}
