#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid
  *@grid: pointer to grid of type int
  *@height: height of the grid
  *Return: a pointer to grid
  */

void free_grid(int **grid, int height)
{
	int freeMem;

	for (freeMem = 0; freeMem < height; freeMem++)
		free(grid[freeMem]);

	free(grid);
}
