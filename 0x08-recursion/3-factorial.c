#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (factorial(n - 1) * n);
}
