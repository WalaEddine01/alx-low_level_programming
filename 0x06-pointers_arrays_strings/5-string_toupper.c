#include "main.h"
/**
 * string_toupper - convert a string to to uppercase
 * @b: input
 * Return: string in uppercase
 *
 */
char *string_toupper(char *b)
{
	int i, a;

	i = 0;
	a = 0;
	while (b[i] != 0)
	{
		a++;
		i++;
	}
	for (i = 0; i < a; i++)
	{
		if (b[i] >= 'a' || b[i] <= 'z')
		{
			b[i] += 32;
		}
		i++;
	}
	return (b);
}
