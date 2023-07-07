#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: @dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != 0 && i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
