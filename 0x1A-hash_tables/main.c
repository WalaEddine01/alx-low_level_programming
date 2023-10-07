#include "hash_tables.h"
int main(void)
{
	char *value;

	value = hash_table_get(NULL, "Canada");
	printf("%s:%s\n", "Canada", value);
	return (EXIT_SUCCESS);
}
