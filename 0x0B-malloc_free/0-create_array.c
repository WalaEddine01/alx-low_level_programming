#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: the size of an array
 * @c: the charectar input
 * Return: the pointer to array or 0 if it fail
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);
	int i;

	if (size == 0 || p == 0)
		return (0);
	for (i == 0; i < size; i++)
		P[i] = c;

	return (p);
}
