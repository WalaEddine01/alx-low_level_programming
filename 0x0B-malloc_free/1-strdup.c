#include "main.h"
/**
 * _strdup - returns a pointer to a newly space memory
 * @str: input
 * Return: a new string
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != 0)
		i++;
	p = malloc(sizeof(char) * i);
	for (j = 0; j < i; j++)
		p[j] = str[j];
	return (p);
}
