#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 * don't return a value
 *
 */
void swap_int(int *a, int *b)
{
	int *p;

	*p = *b;
	*b = *a;
	*a = *p;
}
