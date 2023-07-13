#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of an element
 * Return: a pointer to allocating memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
