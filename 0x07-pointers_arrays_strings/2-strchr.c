#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: the character
 * Return: pointer to the first occurrence of @c;
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s);
		i++;
	}
	return (0);
}
