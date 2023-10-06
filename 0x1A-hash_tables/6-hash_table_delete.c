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

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(ht);
	free(tmp);
}
