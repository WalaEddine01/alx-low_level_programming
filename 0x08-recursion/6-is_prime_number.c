#include "main.h"
/**
 * is_prime_number - check if n is prime
 * @n: input
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return  (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime_number2(n, 3));
}
/**
 * is_prime_number2 - auxiliar function
 * @n: input
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */
int is_prime_number2(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number2(n, i + 2));
}
