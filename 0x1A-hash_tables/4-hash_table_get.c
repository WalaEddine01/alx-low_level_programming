#include "hash_tables.h"
/**
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *msg;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				if (strcmp(ht->array[index]->key, key) == 0)
				{
					msg = strdup(ht->array[index]->value);
					return (msg);
				}
				ht->array[index] = ht->array[index]->next;
			}
		}
		else
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				return (msg);
			}
		}
	}
	return (NULL);
}
