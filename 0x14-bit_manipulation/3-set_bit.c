#include "main.h"

/**
 * set_bit - set 1 at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 for success 0r -1 unsucess
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n + i;
	return (1);
}
