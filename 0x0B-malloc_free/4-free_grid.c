#include "main.h"
#include <stdlib.h>

/**
*free_grid - ...
*@grid: ...
*@height: ...
*Return: ...
*/
void free_grid(int **grid, int height)
{
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
