#include "main.h"
/**
 * free_grid - frees a mattrix grid
 * @height: height of the matrix
 * @grid: input matrix
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0)
		return (0);
	if (grid == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		free(p[i]);
	}
}
