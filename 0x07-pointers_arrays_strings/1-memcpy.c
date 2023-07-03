#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source string
 * @dest: destination string
 * @n: number of bytes from src
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
