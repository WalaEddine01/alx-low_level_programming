#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to an array of intigers
 */
int *array_range(int min, int max)
{
	int i, k;
	int *p;

	if (min > max)
		return (0);
	k = max - min + 1;
	p = malloc(sizeof(int) * k);
	if (p == 0)
		return (0);
	for (i = 0; i < k; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
