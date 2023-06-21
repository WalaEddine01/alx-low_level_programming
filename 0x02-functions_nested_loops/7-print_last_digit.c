#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @c: we make the operation on @c
 * Return: the last digit of @c
 */
int print_last_digit(int c)
{
	int a;

	a = (c / 10);
	c = c - a;
	return (c);
}
