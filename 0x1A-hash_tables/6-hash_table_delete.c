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

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
