#include "main.h"
/**
 * string_toupper - convert a string to to uppercase
 * @b: input
 * Return: string in uppercase
 *
 */
char *string_toupper(char *b)
{
	int i;

	i = 0;
	while (b[i] != 0)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] -= 32;
		}
		i++;
	}
	return (b);
}
