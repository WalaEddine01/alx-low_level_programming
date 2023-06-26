#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer at the first charechter of a string
 * Return: the number of charecters @a
 */
int _strlen(char *s)
{
	int i, a;

	a = 0;
	i = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	return (a);
}
