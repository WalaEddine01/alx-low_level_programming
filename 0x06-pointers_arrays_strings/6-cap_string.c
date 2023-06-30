#include "main.h"
/**
 * *cap_string - capitalizes all words
 * @b: input
 * Return: @d compitalized string
 */
char *cap_string(char *b)
{
	int i;

	i = 0;
	while (b[i] != 0)
	{
		if (b[i] == ' ' || b[i] == '\t' || b[i] == '\n' ||
				b[i] == ',' || b[i] == ';' ||
				b[i] == '.' || b[i] == '!' ||
				b[i] == '?' || b[i] == '"' ||
				b[i] == '(' || b[i] == ')' ||
				b[i] == '{' || b[i] == '}')
		{
			if (b[i] == '\t')
				b[i] = ' ';
			if (b[i + 1] >= 'a' && b[i + 1] <= 'z')
			{
				b[i + 1] = b[i + 1] - 32;
			}
		}
		i++;
	}
	return (b);
}
