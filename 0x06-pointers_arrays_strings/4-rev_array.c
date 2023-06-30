#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: string input
 * @n: number of elements of array
 * don't return
 */
void reverse_array(int *a, int n)
{
	int i, a, m;

	a = n / 2;
	for (i = 0; i < a; i++)
	{
		m = a[i];
		a[i] = a[n - 1];
		a[n - 1] = m;
	}
}
