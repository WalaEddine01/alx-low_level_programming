#include "main.h"
/**
 * leet - encodes a string into 1337
 * @b: string input
 * Return: encodes string
 */
char *leet(char *b)
{
	int i, j;
	char a[5][2] = {{'a', '4'}, {'e', '3'}, {'l', '1'}, {'o', '0'}, {'t', '7'}};
	
	i = 0;
	for (i = 0; b[i] != 0; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (b[i] == a[j][0])
			{
				b[i] = a[j][1];
				break;
			}
		}
	}
	return (b);
}
