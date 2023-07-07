#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: input string
 * @b: input variable
 * @n: size
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
