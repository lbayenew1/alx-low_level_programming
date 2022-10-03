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

	if (size == 0)
		return (NULL);
	else
	{
		p = malloc(size*sizeof(char));
		*p = c;
		return (p);
	}
}
