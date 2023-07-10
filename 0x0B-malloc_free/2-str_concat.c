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

	if (s1 == 0 || s2 == 0)
		return (0);
	while (*s1 != 0)
		i++;
	while (*s2 != 0)
		j++;
	a = i + j;
	p = malloc(sizeof(char) * a + 2);
	if (p == 0)
		return (0);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = k, m = 0; l < a, m < j)
		p[l] = s2[l];

