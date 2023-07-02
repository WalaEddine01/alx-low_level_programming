#include "main.h"
/**
 * leet - encodes a string into 1337
 * @b: string input
 * Return: encodes string
 */
char *leet(char *b)
{
	int i, j;
	char a[10][2] = {{'a', '4'}, {'e', '3'}, {'l', '1'}, {'o', '0'}, {'t', '7'}, {'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', 7}, {'L', 1}};
	
	i = 0;
	while (b[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (b[i] == a[j][0])
			{
				b[i] = a[j][1];
				break;
			}
		}
		i++;
	}
	return (b);
}
