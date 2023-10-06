#include "hash_tables.h"
int main(void)
{
    hash_table_t *ht;
    unsigned long int index = key_index((unsigned char *)"btty", 1024);

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    printf("%s %s \n", ht->array[index]->key, ht->array[index]->value);
    return (EXIT_SUCCESS);
}
