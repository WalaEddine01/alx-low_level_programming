#include "main.h"
/**
 * _pow_recursion - returns the value of x pow y
 * @x: value
 * @y: power
 * Return: @x pow @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1) * x);
}

