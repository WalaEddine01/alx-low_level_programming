#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 * don't return a valuei
 */
void print_triangle(int size)
{
	int i, j, a;

	a = 0;
	if (size == 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		a = 0;
		while (a < (size - 1 - i))
		{
			_putchar(' ');
			a++;
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
