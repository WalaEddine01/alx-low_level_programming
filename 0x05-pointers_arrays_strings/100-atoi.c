#include "main.h"
/**
 * _atoi - convert a string to int
 * @s: string input
 * Return: @d integer converted
 */
int _atoi(char *s)
{
	int d;
	unsigned int b;

	b = 1;
	d = 0;
	do {
		if (*s == '-')
			b = b * -1;
		else if (*s >= '0' && *s <= '9')
			d = (d * 10) + (*s - '0');
		else if (d > 0)
			break;
	} while (*s++);
	return (d * b);
}
