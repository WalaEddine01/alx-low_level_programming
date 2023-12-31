#include "main.h"
/**
 * get_bit - Returns the value of bit at the index given
 * @n: input nulber
 * @index: the index of the bit
 * Return: the value of the bit -1 if it fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	if (n == 0 || index > 63)
		return (-1);
	while (index >= 1)
	{
		n >>= 1;
		index--;
	}
	l = n % 2;
	return (l);
}
