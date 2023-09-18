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
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
