#include "main.h"
/**
 * print_times_table -  that prints the n times table, starting with 0
 * @n: parameters
 * Return: prints the n times table
 */
void print_times_table(int n)
{
	int a, i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar(48);
			for (j = 1 ; j <= n ; j++)
			{	_putchar(',');
				_putchar(' ');
				a = i * j;
				if (a <= 9)
					_putchar(' ');
				if (a <= 99)
					_putchar(' ');
				if (a > 99)
				{
					_putchar((a / 100) + '0');
					_putchar((a / 10) % 10 + '0');
				}
				else
				{
					if (a <= 99 && a >= 10)
						_putchar((a / 10) + '0');
				}
					_putchar((a % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
