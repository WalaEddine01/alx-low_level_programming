#include "hash_tables.h"
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);

    value = hash_table_get(ht, "python");
    if (value == NULL) {
        printf("Test 1 Passed: Got NULL for non-existent key\n");
    } else {
        printf("Test 1 Failed: Expected NULL, got %s\n", value);
    }

    hash_table_set(ht, "c", "fun");
    value = hash_table_get(ht, "c");
    if (strcmp(value, "fun") == 0) {
        printf("Test 2 Passed: Retrieved value matches expected\n");
    } else {
        printf("Test 2 Failed: Expected 'fun', got %s\n", value);
    }

    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");

    value = hash_table_get(ht, "Bob");
    if (strcmp(value, "and Kris love asm") == 0) {
        printf("Test 4 Passed: Retrieved value matches expected\n");
    } else {
        printf("Test 4 Failed: Expected 'and Kris love asm', got %s\n", value);
    }

    value = hash_table_get(ht, "javascript");
    if (value == NULL) {
        printf("Test 5 Passed: Got NULL for non-existent key\n");
    } else {
        printf("Test 5 Failed: Expected NULL, got %s\n", value);
    }


    return 0;
}

