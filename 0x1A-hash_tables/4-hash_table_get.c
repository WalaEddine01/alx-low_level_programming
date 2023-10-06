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

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				if (strcmp(ht->array[index]->key, key) == 0)
					return (ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
			}
		}
		else
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
		}
	}
	return (NULL);
}
