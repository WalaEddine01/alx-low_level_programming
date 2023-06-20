#include "main.h"
/**
 * main - entry point
 * description: print alphabets
 * return: 0 (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
