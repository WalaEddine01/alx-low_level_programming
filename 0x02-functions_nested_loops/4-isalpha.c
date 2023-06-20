#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: is a character checked
 *
 * Return: 1 if @c is a letter, 0 if @c otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
