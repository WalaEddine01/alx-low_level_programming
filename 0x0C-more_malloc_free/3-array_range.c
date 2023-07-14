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

	if (min > max)
		return (0);
	k = max - min;
	p = malloc(sizeof(int) * k);

		return (0);
	for (i = 0; i <= k; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
