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
	void *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	memset(p, 0, nmemb * size);
	return (p);
}
