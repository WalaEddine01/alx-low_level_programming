#include "hash_tables.h"
/**
 * hash_table_get - get the element from the hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value of element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	if (key == NULL || ht->array == NULL || strlen(key) == 0 ||
			ht == NULL  || ht->size == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
