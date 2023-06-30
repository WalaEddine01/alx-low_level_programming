#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: the deffrence between s1 and s2 and Return 0 if they are equale
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != 0 && s1[i] != 0)
	{
		if (s1[i] > s2[i] || s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
