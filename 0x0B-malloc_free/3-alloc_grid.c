#include "main.h"
/**
 * alloc_grid - returb a pointer to matrix
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to matrix or 0 if it fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width == 0 || height == 0)
		return (0);
	p = malloc(sizeof(int *) * height);
	if (p == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
