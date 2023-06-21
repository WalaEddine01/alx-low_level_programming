#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @c: we make the operation on @c
 * Return: the last digit of @c
 */
int print_last_digit(int c)
{
	int a;

	c = (c % 10);
	_putchar(c + '0');
	return (c);
}
