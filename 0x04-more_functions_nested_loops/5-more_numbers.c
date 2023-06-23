#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * no parameters
 * don't return any value
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + '0');
				n = j % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
