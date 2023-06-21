#include "main.h"
/**
 * times_table -  that prints the 9 times table, starting with 0
 * don't accept parameters
 * prints the 9 times table
 */
void times_table(void)
{
	int a;

	for (int i = 0 ; i <= 9 ; i++)
	{
		for (int j = 0 ; j <= 9 ; j++)
		{
			a = (i * j);
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
