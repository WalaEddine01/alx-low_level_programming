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

	if (s1 == 0 || s2 == 0)
		return (0);
	if (n < 0 || n == 0)
	{
		p = malloc(sizeof(char) * (strlen(s1)) + 1);
		if (p == 0)
			return (0);
		for (i = 0; i < strlen(s1); i++)
		{
			p[i] = s2[i];
		}
		return (p);
	}
	a = strlen(s1);
	b = strlen(s2);
	c = a + b;
	p = malloc(sizeof(char) * (c + 1));
	if (p == 0)
		return (0);
	for (i = 0; i < a; i++)
	{
		p[i] = s1[i];
	}
	if (n >= b)
	{
		for (j = 0; j < b; j++)
		{
			p[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			p[i] = s2[j];
			i++;
		}
	}
	return (p);
}
