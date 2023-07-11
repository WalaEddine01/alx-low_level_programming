#include "main.h"
/**
 * str_concat - concatenates two strrings
 * @s1: first input
 * @s2: second input
 * Return: pointer to new string or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < j; l++)
		p[k + l] = s2[l];
	p[k + l] = '\0';
	return (p);
}
