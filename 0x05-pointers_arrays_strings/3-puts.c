#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * don't return
 */
void _puts(char *str)
{
	int i;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
