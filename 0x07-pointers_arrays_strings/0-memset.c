#include "main.h"

/**
 * _memset - run your own memset
 * @s : string
 * @b : character
 * @n : byte
 * Return : string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *dst = s;

	while (n > 0)
	{
		*dst = (unsigned char) b;
		dst++;
		n--;
	}
	return (s);
}
