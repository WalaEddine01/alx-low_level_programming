#include "main.h"
/**
 * *_strcpy - copies the string to another
 * @dest: output
 * @src: input
 * Return: string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = 0;
	return (dest);
}
