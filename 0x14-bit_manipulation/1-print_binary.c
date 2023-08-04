#include "main.h"
/**
 * print_binary - the binary representation of a number
 * @n: input number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int l = 1;

	if (n == 0)
	{
		printf("0\n");
		return;
	}
	l <<= ((sizeof(unsigned long int) * 8) - 1);
	while ((n & l) == 0)
		l >>= 1;
	while (l > 0)
	{
		if (n & l)
			printf("1");
		else
			printf("0");
		l >>= 1;
	}
	printf("\n");
}
