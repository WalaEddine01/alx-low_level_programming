#include "main.h"
/**
 * *_strncat - conatenates two strings
 * @dest: destination
 * @src: src
 * @n: number of bytes
 * Return: @dest concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
