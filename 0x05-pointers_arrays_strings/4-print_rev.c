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
	i = a-1;
	while (i >= 0)
	{	
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
