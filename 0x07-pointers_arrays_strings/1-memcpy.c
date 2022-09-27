#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: string
 * @src: string
 * @n: unsigned integer
 * Return: copy of string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + i);
		i++;
		n--;
	}
	return (dest);
}
