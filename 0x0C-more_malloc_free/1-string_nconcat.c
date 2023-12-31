#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, a, b;

	if (s1 == 0)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == 0)
		return (0);
	for (a = 0; s1[a] != 0; a++)
		p[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = 0;
	return (p);
}
