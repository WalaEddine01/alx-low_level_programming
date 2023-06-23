#include "main.h"
/**
 * _isdigit - checks for alphabetic character.
 *
 * @c: is a charecter checked
 *
 * Return: 1 if @c is a digit, 0 if @c otherwise
 */
int _isdigit(int c)
{
	int a;

	a = c + '0'
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}
