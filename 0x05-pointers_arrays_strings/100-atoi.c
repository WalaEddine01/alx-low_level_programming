#include "main.h"
/**
 * _atoi - convert a string to int
 * @s: string input
 * Return: @d integer converted
 */
int _atoi(char *s)
{
	int i, b, d;

	i = 0;
	b = 1;
	d = 0;
	do {
		if (s[i] == '-')
			b = b * -1;
		if (s[i] >= '0' && s[i] <= '9')
			d = (d * 10) + (s[i] - '0');
		else if (d > 0)
			break;
		i++;
	} while (s[i] != 0);
	return (d * b);
}