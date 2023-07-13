#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size_t
 * Return: pointer to the allocating memory or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == 0)
		exit(98);
}
