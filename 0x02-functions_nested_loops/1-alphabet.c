#include "main.h"
/**
 * print_alphabet - using the _putchar function to print alphabet
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
}
