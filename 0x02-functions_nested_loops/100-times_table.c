#include "main.h"
/**
 * print_times_table -  that prints the n times table, starting with 0
 * @n: parameters
 * Return: prints the n times table
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar(48);
			for (j = 1 ; j <= n ; j++)
			{	_putchar(',');
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
					_putchar(a + '0');
				}
			}
			_putchar('\n')
		}
	}
}
