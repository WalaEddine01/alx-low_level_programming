#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at the index
 * @n: pointer to an nulber
 * @index: index to the bit
 * Return: 1 if it worked -1 Otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;

	if (n == 0 || index > 63)
		return (-1);
	while (index > 0)
	{
		j = j << 1;
		index--;
	}
	*n = *n | j;
	return (1);
}
