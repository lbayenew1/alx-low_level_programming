#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer of 2d array of integer
 * @width: integer
 * @height: integer
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **pp;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	pp = malloc(width * sizeof(int *));
	if (pp == NULL)
		free(pp);
		return (NULL);
	for (i = 0; i < width; i++)
	{
		pp[i] = malloc(height * sizeof(int));
		if (pp[i] == NULL)
			free(pp[i]);
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			pp[i][j] = 0;
		}
	}
	return (pp);
}
