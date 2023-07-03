#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle:substring
 * Return: pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			k = i;
			if (needle[j] == haystack[k])
			{
				while (needle[j] == haystack[k])
				{
					k++;
					j++;
				}
				if (needle[j] == 0)
					return (haystack + i);
			}
		}
	}
	return (0);
}
