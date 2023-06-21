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
		for (j = 0 ; j <= 9 ; j++)
		{
			a = (i * j);
			if (a <= 9)
			{
				_putchar(a + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
