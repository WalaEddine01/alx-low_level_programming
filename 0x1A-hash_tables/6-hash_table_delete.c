#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 * Return: void
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (ht->array[i])
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
