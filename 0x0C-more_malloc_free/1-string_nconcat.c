#include "main.h"
/**
 * string_nconcat - cocatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c, i, j, a, b;
	char *p;

	if (s1 == 0 || s2 == 0 || n == 0)
		return (0);
	a = strlen(s1);
	b = strlen(s2);
	c = a + b;
	p = malloc(sizeof(char) * (c + 1));
	if (p == 0)
		return (0);
	for (i = 0; i < a; i++)
	{
		p[i] = s2[i];
	}
	if (n >= b)
	{
		for (j = 0; j < b; j++)
		{
			p[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			p[i] = s2[j];
		}
	}
	return (p);
}
