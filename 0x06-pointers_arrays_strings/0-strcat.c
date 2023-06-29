#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a;

	while (*dest != 0)
	{
		*dest++;
	}
	while (*src != 0){
		*dest = *src;
		*src++;
		*dest++;
	}
	return (dest);
}
