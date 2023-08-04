#include "main.h"
/**
 * binary_to_uint - converts a binary number to uint
 * @b: input string
 * Return: integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	while (b[i] != 0)
	{
		n <<= 1;
		if (b[i] == '1')
			n++;
		else if (b[i] != '0')
			return (0);
		i++;
	}
	return (n);
}
