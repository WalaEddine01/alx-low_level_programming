#include "hash_tables.h"
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(10);
	hash_table_set(ht, "Holberton", "is cool");
	hash_table_set(ht, "Holberton", "is soooo cooool");
	hash_table_set(ht, "Holberton", "is awesome");
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
