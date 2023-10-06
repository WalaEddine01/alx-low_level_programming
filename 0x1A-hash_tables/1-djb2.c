#include "hash_tables.h"
/**
 * hash_djb2 - hash function returns the hash value
 * @str: the string input
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int hash;
	int c = 0;

	hash = 5381;
	while (c = *str++)
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
