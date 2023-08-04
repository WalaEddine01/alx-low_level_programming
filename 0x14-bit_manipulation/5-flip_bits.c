#include "main.h"
/**
 * count_ones - count the number of 1s in the binary number
 * @n: input number
 * Return: the number of ones
 */
int count_ones(unsigned long int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - returns the number of bits need to flip
 * to get to another number
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	int i;

	if (n == m || (m == 0 && n == 0))
		return (0);
	l = n ^ m;
	i = count_ones(l);
	return (i);
}
