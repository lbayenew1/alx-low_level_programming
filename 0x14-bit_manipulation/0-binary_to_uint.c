#include "main.h"
/**
 * binary_to_uint - convert binary to int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int dec, base_2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	dec = 0;
	base_2 = 1;
	for (len--; len >= 0; len--, base_2 = base_2 * 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			dec = dec + base_2;
	}
	return (dec);
}
