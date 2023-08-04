#include "main.h"
/**
 * print_binary - the binary representation of a number
 * @n: input number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int j = 0, l = 0;

	if (n == 0)
	{
		printf ("0");
		return;
	}
	l = n / 2;
	j = n % 2;
	while (l > 0)
	{
		printf("%u", j);
		j = l % 2;
		l = l / 2;
	}
	printf("%u", j);
}
