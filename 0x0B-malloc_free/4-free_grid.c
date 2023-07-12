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

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
