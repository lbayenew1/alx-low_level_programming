#include "main.h"

/**
 * get_bit - get bit at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; i++, n >>= 1)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}
