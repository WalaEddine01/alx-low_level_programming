#include "hash_tables.h"
int main(void)
{
    hash_table_t *ht;
    unsigned long int index = key_index((unsigned char *)"btty", 1024);

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "cool");
    printf("%s\n", ht->array[index]->key);
    return (EXIT_SUCCESS);
}
