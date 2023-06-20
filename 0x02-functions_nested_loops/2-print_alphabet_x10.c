#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * description: print alphabets 10 times
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
