#include "hash_tables.h"
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(5);
        hash_table_set(ht, "betty", "cool");
        hash_table_set(ht, "hetairas", "cool");
        hash_table_set(ht, "mentioner", "cool");
        hash_table_set(ht, "heliotropes", "cool");
        hash_table_set(ht, "neurospora", "cool");
        hash_table_set(ht, "depravement", "cool");
        hash_table_set(ht, "serafins", "cool");
        hash_table_set(ht, "stylist", "cool");
    return (EXIT_SUCCESS);
}
