#include "main.h"

/**
 * _calloc - allocate memory of array
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	for (; nmemb > 0; nmemb--)
	{
		p = malloc(size);
		if (p == NULL)
			return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
