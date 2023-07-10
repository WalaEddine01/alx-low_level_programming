#include "main.h"
/**
 * str_concat - concatenates two strrings
 * @s1: first input
 * @s2: second input
 * Return: pointer to new string or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, a;
	char *p;

	i = 0;
	j = 0;
	a = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (*s1 != 0)
		i++;
	while (*s2 != 0)
		j++;
	a = i + j;
	p = malloc(sizeof(char) * a + 1);
	if (p == 0)
		return (0);
	for (k = 0; k < i; k++)
		p[k] = s1[k];*
	m = 0;
	k = k + 1;
	for (l = k; l < a; l++)
		p[l] = s2[l];
	return (p);
}

