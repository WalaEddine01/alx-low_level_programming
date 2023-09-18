#include "main.h"
/**
 * _strcpy - copies strings
 * @dest: destination
 * @src: source
 *
 * Return: @dest string
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
	return (dest);
}
