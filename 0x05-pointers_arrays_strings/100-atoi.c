#include "main.h"
/**
 * _atoi - convert a string to int
 * @s: string input
 * Return: @d integer converted
 */
int _atoi(char *s)
{
	int i, a, b, c, d, f;

	i = 0;
	a = 0;
	d = 0;
	b = 1;
	c = 0;
	f = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	for (i = a - 1; i >= 0; i--)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			c = s[i] - '0';
			c = c * b;
			b = b * 10;
			d = d + c;
			f = 1;
		}
		else
			if (s[i] == '-')
			{
				d = d * -1;
				f = 1;
			}
		if (f == 1 && s[i] < 48 || s[i] > 57 || s[i] != '-')
			break;
	}
	return (d);
}
