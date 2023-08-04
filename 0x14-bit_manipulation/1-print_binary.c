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
		printf("0");
		return;
	}
	l <<= sizeof(unsigned long int) * 8 - 1;
	while (l > 0)
	{
		if (n & l)
			printf('1');
		else
			printf('0');
		l >>= 1;
	}
	printf("\n");
}
