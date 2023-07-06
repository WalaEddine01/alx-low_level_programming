#include "main.h"
/**
 * _sqrt_recursion - returns the square root
 * @n: intput number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (squar_recu(n, 1));
}
/**
 * squar_recu - find square root
 * @n: input
 * @v: square root
 * Return: square root value
 */
int squar_recu(int n, int v)
{
	if (v * v ==  n)
		return (v);
	if (v * v < n)
		return (squar_recu(n, val + 1));
	return (-1);
}
