#include "main.h"
/**
 * puts_half - print half of a string
 * @str: input
 *
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	n = (i - 1) / 2;
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
