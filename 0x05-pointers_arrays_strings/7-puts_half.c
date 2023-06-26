#include "main.h"
/**
 * puts_half - print half of a string
 * @str: input
 *
 */
void puts_half(char *str)
{
	int i, n, j;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
