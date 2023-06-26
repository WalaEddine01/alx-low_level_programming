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
		i++;
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
