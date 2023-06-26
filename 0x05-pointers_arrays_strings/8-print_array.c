#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: first input
 * @n: second input number of elements
 * don't return a value
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a);
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

