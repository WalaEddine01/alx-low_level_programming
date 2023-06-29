#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (*dest != 0)
	{
		*dest++;
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
