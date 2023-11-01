#include "main.h"
#include <stdio.h>

/**
  *free_grid - frees a 2 dimensional grid
  *@grid: pointer to grid of type int
  *@height: height of the grid
  *Return: a pointer to grid
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
