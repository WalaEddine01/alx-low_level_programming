#include "main.h"
/**
 * *_strcpy - copies the string to another
 * @dest: output
 * @src: input
 * Return: string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	while (src[i] != 0)
	{
		i++;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}
