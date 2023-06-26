#include "main.h"
/**
 * print_rev - print a string in revers
 * @s: string input
 * don't return
 */
void print_rev(char *s)
{
	int i, a;

	if (s == 0)
		return;
	a = 0;
	i = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	for (i = a; i > 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
