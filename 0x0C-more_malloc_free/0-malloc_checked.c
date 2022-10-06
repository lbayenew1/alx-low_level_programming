#include "main.h"

/**
 * malloc_checked - pointer to memory allocated
 * @b: unsigned integer
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
