#include "main.h"
/**
 * print_number - print int number
 * @n: int input
 * Return: Nothing
 */
void print_number(int n)
{
	int c;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	c = n % 10 + '0';
	_putchar(c);
}
