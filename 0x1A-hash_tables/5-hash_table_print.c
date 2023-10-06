#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	int a = 0;

	if (ht->array == NULL || ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (a == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			a = 1;
			tmp = tmp->next;
		}
	}
	printf("}");
	printf("\n");
	free(tmp);
}
