#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - allocate memory
 * @size: size ofbytes
 * @c: character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
