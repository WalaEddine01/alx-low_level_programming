#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: which is the set of characters to be considered
 * Return: number of bytes in @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int n;

	i = 0;
	j = 0;
	n = 0;
	for (i = 0; s[i] != 0; i++)
	{
		found = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			return (n);
		n++;
	}
	return (n);
}
