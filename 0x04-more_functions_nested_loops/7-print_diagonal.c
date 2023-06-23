#include "main.h"
/**
 * print_diagonal - draws a diaonal line in the terminal
 * @n : is the number of times the character _ should be printed
 * don't return a value
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			if (i < (n - 1))
			{
				_putchar('\n');
			}
			else
			{
			}
			for (j = 0; j <= i; j++)
			{
				if (i < (n - 1))
				{
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
