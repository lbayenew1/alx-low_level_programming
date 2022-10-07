#include "main.h"

/**
 * array_range - array from min to max
 * @min: integer
 * @max: integer
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
