#include "main.h"
/**
 * str_concat - concatenates two strrings
 * @s1: first input
 * @s2: second input
 * Return: pointer to new string or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, a;
	char *p;

	if (s1 == 0)
		*s1 = '\n';
	if (s2 == 0)
		*s2 = '\0';
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;
	a = i + j;
	p = malloc(sizeof(char) * (a + 1));
	if (p == 0)
		return (0);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < j; k++)
		p[k + l] = s2[l];
	p[k + l] = '\0';
	return (p);
}

