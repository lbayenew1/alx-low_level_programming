#include "function_pointers.h"

/**
 * int_index - search index that is true
 * @array: array
 * @size: integer
 * @cmp: point to function
 * Return: index
 * Onerror: return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
