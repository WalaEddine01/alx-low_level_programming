#include "main.h"
/**
 * times_table -  that prints the 9 times table, starting with 0
 * don't accept parameters
 * prints the 9 times table
 */
void times_table(void)
{
	int a, i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(48);
		for (j = 1 ; j <= 9 ; j++)
		{
			_putchar(',');
			_putchar(' ');
			a = i * j;
			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
