#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "USA", "Washington");
	hash_table_set(ht, "France", "Paris");
	hash_table_set(ht, "UK", "London");
	hash_table_set(ht, "Spain", "Madrid");
	hash_table_set(ht, "Germany", "Berlin");
	hash_table_set(ht, "China", "Beijing");
	hash_table_set(ht, "Russia", "Moscow");
	hash_table_set(ht, "Bahrain", "Manama");
	hash_table_set(ht, "Canada", "Ottawa");
	hash_table_set(ht, "Brazil", "Brasilia");
	hash_table_set(ht, "Sweden", "Stockholm");
	hash_table_set(ht, "Iceland", "Reykjavik");
	hash_table_set(ht, "Japan", "Tokyo");
	hash_table_set(ht, "Australia", "Canberra");
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
